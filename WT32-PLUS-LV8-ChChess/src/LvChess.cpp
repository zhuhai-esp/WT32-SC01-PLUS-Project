#include "LvChess.h"
#include "XQWL.h"
#include <map>
#include <vector>
#include <iostream>

using namespace std;

std::map<uint8_t, const void *> bmpPieces = {
        {8,  &rk},
        {9,  &ra},
        {10, &rb},
        {11, &rn},
        {12, &rr},
        {13, &rc},
        {14, &rp},

        {16, &bk},
        {17, &ba},
        {18, &bb},
        {19, &bn},
        {20, &br},
        {21, &bc},
        {22, &bp},
};

std::map<uint8_t, const void *> bmpPieces2 = {
        {8,  &rk2},
        {9,  &ra2},
        {10, &rb2},
        {11, &rn2},
        {12, &rr2},
        {13, &rc2},
        {14, &rp2},

        {16, &bk2},
        {17, &ba2},
        {18, &bb2},
        {19, &bn2},
        {20, &br2},
        {21, &bc2},
        {22, &bp2},
};

typedef struct {
    lv_obj_t *obj;
    int pc;
    int sq;
    bool ok;
} lv_piece;

// 棋子选择框
lv_obj_t *lv_select;
lv_obj_t *lv_board;
vector<lv_piece *> lv_pieces;

// "DrawSquare"参数
const BOOL DRAW_SELECTED = TRUE;

//消息通知
static void MessageBoxMute(const char *txt) {
    printf("%s", txt);
}

static void RefreshBoard() {
    int x, y, xx, yy, sq, pc;
    for (lv_piece *p: lv_pieces) {
        p->ok = false;
    }
    for (x = FILE_LEFT; x <= FILE_RIGHT; x++) {
        for (y = RANK_TOP; y <= RANK_BOTTOM; y++) {
            xx = BOARD_EDGE_H + (x - FILE_LEFT) * SQUARE_SIZE;
            yy = BOARD_EDGE_V + (y - RANK_TOP) * SQUARE_SIZE;
            sq = COORD_XY(x, y);
            pc = pos.ucpcSquares[sq];
            if (pc != 0) {
                for (lv_piece *p: lv_pieces) {
                    if (!p->ok && p->pc == pc) {
                        lv_obj_set_pos(p->obj, xx, yy);
                        p->ok = true;
                        break;
                    }
                }
            }
        }
    }
    for (lv_piece *p: lv_pieces) {
        if (!p->ok) {
            lv_obj_add_flag(p->obj, LV_OBJ_FLAG_HIDDEN);
        } else {
            lv_obj_clear_flag(p->obj, LV_OBJ_FLAG_HIDDEN);
        }
    }
}

// 绘制格子
static void DrawSquare(int sq, BOOL bSelected = FALSE) {
    int sqFlipped, xx, yy, pc;
    sqFlipped = Xqwl.bFlipped ? SQUARE_FLIP(sq) : sq;
    xx = BOARD_EDGE_H + (FILE_X(sqFlipped) - FILE_LEFT) * SQUARE_SIZE;
    yy = BOARD_EDGE_V + (RANK_Y(sqFlipped) - RANK_TOP) * SQUARE_SIZE;
    //SelectObject(Xqwl.hdcTmp, Xqwl.bmpBoard);
    //BitBlt(Xqwl.hdc, xx, yy, SQUARE_SIZE, SQUARE_SIZE, Xqwl.hdcTmp, xx, yy, SRCCOPY);
    pc = pos.ucpcSquares[sq];
    if (pc != 0) {
        //DrawTransBmp(Xqwl.hdc, Xqwl.hdcTmp, xx, yy, Xqwl.bmpPieces[pc]);
    }
    if (bSelected) {
        //DrawTransBmp(Xqwl.hdc, Xqwl.hdcTmp, xx, yy, Xqwl.bmpSelected);
    }
    //LV_LOG_USER("DS: [%d][%d][%dx%d]", sq, bSelected, xx, yy);
    if (bSelected) {
        lv_obj_set_pos(lv_select, xx, yy);
    }
    RefreshBoard();
}

// 电脑回应一步棋
static void ResponseMove() {
    int vlRep;
    // 电脑走一步棋
    //SetCursor((HCURSOR) LoadImage(NULL, IDC_WAIT, IMAGE_CURSOR, 0, 0, LR_DEFAULTSIZE | LR_SHARED));
    SearchMain();
    //SetCursor((HCURSOR) LoadImage(NULL, IDC_ARROW, IMAGE_CURSOR, 0, 0, LR_DEFAULTSIZE | LR_SHARED));
    pos.MakeMove(Search.mvResult);
    // 清除上一步棋的选择标记
    DrawSquare(SRC(Xqwl.mvLast));
    DrawSquare(DST(Xqwl.mvLast));
    // 把电脑走的棋标记出来
    Xqwl.mvLast = Search.mvResult;
    DrawSquare(SRC(Xqwl.mvLast), DRAW_SELECTED);
    DrawSquare(DST(Xqwl.mvLast), DRAW_SELECTED);
    // 检查重复局面
    vlRep = pos.RepStatus(3);
    if (pos.IsMate()) {
        // 如果分出胜负，那么播放胜负的声音，并且弹出不带声音的提示框
        //PlayResWav(IDR_LOSS);
        MessageBoxMute("请再接再厉！");
        Xqwl.bGameOver = TRUE;
    } else if (vlRep > 0) {
        vlRep = pos.RepValue(vlRep);
        // 注意："vlRep"是对玩家来说的分值
        //PlayResWav(vlRep < -WIN_VALUE ? IDR_LOSS : vlRep > WIN_VALUE ? IDR_WIN : IDR_DRAW);
        MessageBoxMute(vlRep < -WIN_VALUE ? "长打作负，请不要气馁！" :
                       vlRep > WIN_VALUE ? "电脑长打作负，祝贺你取得胜利！" : "双方不变作和，辛苦了！");
        Xqwl.bGameOver = TRUE;
    } else if (pos.nMoveNum > 100) {
        //PlayResWav(IDR_DRAW);
        MessageBoxMute("超过自然限着作和，辛苦了！");
        Xqwl.bGameOver = TRUE;
    } else {
        // 如果没有分出胜负，那么播放将军、吃子或一般走子的声音
        //PlayResWav(pos.InCheck() ? IDR_CHECK2 : pos.Captured() ? IDR_CAPTURE2 : IDR_MOVE2);
        if (pos.Captured()) {
            pos.SetIrrev();
        }
    }
}

void DelayRespondMove() {
    lv_timer_create([](lv_timer_t *t) {
        ResponseMove();
        lv_timer_del(t);
    }, 100, nullptr);
}

// 点击格子事件处理
static void ClickSquare(int sq) {
    int pc, mv, vlRep;
    //Xqwl.hdc = GetDC(Xqwl.hWnd);
    //Xqwl.hdcTmp = CreateCompatibleDC(Xqwl.hdc);
    sq = Xqwl.bFlipped ? SQUARE_FLIP(sq) : sq;
    pc = pos.ucpcSquares[sq];

    if ((pc & SIDE_TAG(pos.sdPlayer)) != 0) {
        // 如果点击自己的子，那么直接选中该子
        if (Xqwl.sqSelected != 0) {
            DrawSquare(Xqwl.sqSelected);
        }
        Xqwl.sqSelected = sq;
        DrawSquare(sq, DRAW_SELECTED);
        if (Xqwl.mvLast != 0) {
            DrawSquare(SRC(Xqwl.mvLast));
            DrawSquare(DST(Xqwl.mvLast));
        }
        //PlayResWav(IDR_CLICK); // 播放点击的声音
    } else if (Xqwl.sqSelected != 0 && !Xqwl.bGameOver) {
        // 如果点击的不是自己的子，但有子选中了(一定是自己的子)，那么走这个子
        mv = MOVE(Xqwl.sqSelected, sq);
        if (pos.LegalMove(mv)) {
            if (pos.MakeMove(mv)) {
                Xqwl.mvLast = mv;
                DrawSquare(Xqwl.sqSelected, DRAW_SELECTED);
                DrawSquare(sq, DRAW_SELECTED);
                Xqwl.sqSelected = 0;
                // 检查重复局面
                vlRep = pos.RepStatus(3);
                if (pos.IsMate()) {
                    // 如果分出胜负，那么播放胜负的声音，并且弹出不带声音的提示框
                    //PlayResWav(IDR_WIN);
                    MessageBoxMute("祝贺你取得胜利！");
                    Xqwl.bGameOver = TRUE;
                } else if (vlRep > 0) {
                    vlRep = pos.RepValue(vlRep);
                    // 注意："vlRep"是对电脑来说的分值
                    //PlayResWav(vlRep > WIN_VALUE ? IDR_LOSS : vlRep < -WIN_VALUE ? IDR_WIN : IDR_DRAW);
                    MessageBoxMute(vlRep > WIN_VALUE ? "长打作负，请不要气馁！" :
                                   vlRep < -WIN_VALUE ? "电脑长打作负，祝贺你取得胜利！" : "双方不变作和，辛苦了！");
                    Xqwl.bGameOver = TRUE;
                } else if (pos.nMoveNum > 100) {
                    //PlayResWav(IDR_DRAW);
                    MessageBoxMute("超过自然限着作和，辛苦了！");
                    Xqwl.bGameOver = TRUE;
                } else {
                    // 如果没有分出胜负，那么播放将军、吃子或一般走子的声音
                    //PlayResWav(pos.InCheck() ? IDR_CHECK : pos.Captured() ? IDR_CAPTURE : IDR_MOVE);
                    if (pos.Captured()) {
                        pos.SetIrrev();
                    }
                    //ResponseMove(); // 轮到电脑走棋
                    DelayRespondMove();
                }
            } else {
                //PlayResWav(IDR_ILLEGAL); // 播放被将军的声音
            }
        }
        // 如果根本就不符合走法(例如马不走日字)，那么程序不予理会
    }
    //DeleteDC(Xqwl.hdcTmp);
    //ReleaseDC(Xqwl.hWnd, Xqwl.hdc);
}

// 触摸响应
static void on_board_click(lv_event_t *e) {
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_PRESSED) {
        auto indev = lv_indev_get_act();
        static lv_point_t tp;
        lv_indev_get_point(indev, &tp);
        int x = FILE_LEFT + (tp.x - BOARD_EDGE_H) / SQUARE_SIZE;
        int y = RANK_TOP + (tp.y - BOARD_EDGE_H) / SQUARE_SIZE;
        if (x >= FILE_LEFT && x <= FILE_RIGHT && y >= RANK_TOP && y <= RANK_BOTTOM) {
            ClickSquare(COORD_XY(x, y));
        }
    }
}

// 绘制棋盘
static void DrawInitBoard() {
    int x, y, xx, yy, sq, pc;
    auto act = lv_scr_act();
    // 画棋盘
    lv_board = lv_img_create(act);
    lv_img_set_src(lv_board, &board);
    // 棋盘事件
    lv_obj_add_flag(lv_board, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(lv_board, on_board_click, LV_EVENT_PRESSED, nullptr);

    // 画棋子
    for (x = FILE_LEFT; x <= FILE_RIGHT; x++) {
        for (y = RANK_TOP; y <= RANK_BOTTOM; y++) {
            xx = BOARD_EDGE_H + (x - FILE_LEFT) * SQUARE_SIZE;
            yy = BOARD_EDGE_V + (y - RANK_TOP) * SQUARE_SIZE;
            sq = COORD_XY(x, y);
            pc = pos.ucpcSquares[sq];
            if (pc != 0) {
                auto img = bmpPieces[pc];
                auto lvg = lv_img_create(act);
                lv_img_set_src(lvg, img);
                lv_obj_set_pos(lvg, (int16_t) xx, (int16_t) yy);
                auto *lv_p = new lv_piece;
                lv_p->obj = lvg;
                lv_p->pc = pc;
                lv_p->sq = sq;
                lv_pieces.push_back(lv_p);
            }
        }
    }

    // 选中遮罩
    lv_select = lv_img_create(act);
    lv_img_set_src(lv_select, &selected);
    lv_obj_set_pos(lv_select, (int16_t) xx, (int16_t) yy);
}

//开始游戏
void lv_chess_start() {
    InitZobrist();
    LoadBook();
    Xqwl.bFlipped = FALSE;
    Startup();
    DrawInitBoard();
}