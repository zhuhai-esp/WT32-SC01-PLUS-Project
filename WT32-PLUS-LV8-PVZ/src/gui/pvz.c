#include "lvgl.h"
#include "stdlib.h"



#define  max_quantity  20  //每种角色最大数量15
#define  zb_maxlive    10  //僵尸最大血量10
#define  zb_period     5000   //僵尸产生周期7000MS
#define  zidan_speed   20    //子弹每20ms飞一个像素
#define  shine_period  5000  //阳光生产周期5000ms
#define  zb_move_speed 200   //僵尸移动速度200ms走一个像素
#define  plant_stackable  0  //植物可叠加放置（1可叠加，0不可叠加）
#define  sunflower_add_sun_period  5000   //向日葵阳光生产周期5000ms




static int nuclear_btn_select;
static int cherry_btn_select;
static int chanzi_btn_select;
static int sunflower_btn_select;
static int wandouflower_btn_select;
static int wogua_btn_select;
static lv_obj_t * nuclear_btn;
static lv_obj_t * cherry_btn;
static lv_obj_t * wogua_btn;
static lv_obj_t * chanzi_btn;
static lv_obj_t * sunflower_btn;
static lv_obj_t * wandouflower_btn;
static lv_obj_t * botton_exit;
static lv_obj_t *  map1;
static lv_obj_t * screen;
static lv_obj_t * lable_sun_score;
static lv_obj_t * lable_right;
static lv_obj_t * lable_down;
static lv_timer_t * timer_newzb;
static lv_timer_t * timer_movezb;
static lv_timer_t * timer_newshine;
static lv_timer_t * timer_zidan_fly;
static lv_timer_t * timer_hit_test;
static lv_timer_t * timer_led;

static lv_obj_t * panel;
static lv_obj_t * panellable;
static lv_obj_t * btext;
static lv_obj_t * score_lable;
static lv_obj_t *	next_lable;
static lv_obj_t * gameover_botton;
static lv_obj_t *	gameover_lable;
static lv_obj_t * exit_lable;
static lv_obj_t * map1;
static int sun_score=0;


LV_IMG_DECLARE(pvz_map_1)
LV_IMG_DECLARE(zb1)
LV_IMG_DECLARE(sunshine)
LV_IMG_DECLARE(wandou_img)
LV_IMG_DECLARE(sun_img)
LV_IMG_DECLARE(wogua_img)
LV_IMG_DECLARE(zidan_split_img)
LV_IMG_DECLARE(cherry_img)
LV_IMG_DECLARE(cherry_boom_img)
LV_IMG_DECLARE(nuclear_img)
LV_IMG_DECLARE(nuclear_boom_img)

typedef struct
{
	lv_timer_t * timer;
	int alive;

}timer_type;

typedef struct
{
	lv_obj_t * wogua;
	int alive;
	int live;
  int x;
  int y;
}wogua_type;

typedef struct
{
	lv_obj_t * zidan;
	int alive;
  int x;
  int y;
}zidan_type;

typedef struct
{
	lv_obj_t * zb;
	int alive;
  int live;
  int x;
  int y;
}zb_type;

typedef struct
{
	lv_obj_t * sunflower;
	lv_timer_t * sunflowertimer;
	int alive;
  int x;
  int y;
}sunflower_type;


typedef struct
{
	lv_obj_t * wandouflower;
	lv_timer_t * zidantimer;
	int alive;
  int x;
  int y;

}wandou_type;


typedef struct
{
	lv_obj_t * plant;
	int alive;
  int x;
  int y;
}plant_type;


typedef struct
{
	lv_obj_t * shine;
	int alive;
  int x;
  int y;
}shine_type;

static char map_flag[5][9]={0,};
static wogua_type  wogua[max_quantity]={0,};
static timer_type add_zidan_timer[max_quantity]={0,};
static zidan_type  zidan[max_quantity]={0,};
static sunflower_type  sunflower[max_quantity]={0,};
static wandou_type  wandouflower[max_quantity]={0,};
static shine_type  shine[max_quantity]={0,};
static zb_type  zb_matrix[max_quantity]={0,};
static void timer_cb1(lv_timer_t * t);
static void timer_cb2(lv_timer_t * t);
static void timer_cb3(lv_timer_t * t);
static void shine_del_cb1(lv_event_t * e);
static void anim_cb1(void * var, int32_t v);
static void anim_cb2(void * var, int32_t v);
static void cube_ready();
static void init_shine_zb();
static void lv_anim_exec_xcb(void * var, int32_t v);
static void ready_cb( lv_anim_t * var);
static void print_cubematrix();
static void all_clear(lv_event_t * e);
static void gameoverbotton_event_cb(lv_event_t * e);
static void shine_delect_cb(lv_anim_t * a);
static void sunflower_btn_cb(lv_event_t * e);
static void wandouflower_btn_cb(lv_event_t * e);
static void map_click_cb(lv_event_t * e);
static void add_zidan_cb(lv_timer_t * t);
static void zidan_move();
static void hit_test(lv_timer_t * t);
static void anim_zb_dead_cb(void * var, int32_t v);
static void anim_zb_delect_cb(lv_anim_t * a);
static void shine_start_cb1(void * var, int32_t v);
static void chanzi_btn_cb(lv_event_t * e);
static void sun_creat_cb(lv_timer_t * t);
static void wogua_btn_cb(lv_event_t * e);
static void nuclear_btn_cb(lv_event_t * e);
static void wogua_dead_cb(void * var, int32_t v);
static void wogua_dead_cb2(void * var, int32_t v);
static void wogua_delect_cb(lv_anim_t * a);
static void zb_move_cb(void * var, int32_t v);
static void zidan_split_cb(void * var, int32_t v);
static void zidan_split_delect_cb(lv_anim_t * a);
static void timer_led_cb(lv_timer_t * t);
static void exit_game_cb(lv_event_t * e);
static void plant_anim_cb(void * var, int32_t v);
static void zb_del_start_cb(lv_anim_t * a);
static void cherry_delete_cb(lv_anim_t * a);
static void cherry_anim_cb(void * var, int32_t v);
static void boom_delete_cb(lv_anim_t * a);
static void boom_anim_cb(void * var, int32_t v);
static void cherry_btn_cb(lv_event_t * e);
static void nuclear_boom_delete_cb(lv_anim_t * a);
static void nuclear_boom_anim_cb(void * var, int32_t v);
static void nuclear_delete_cb(lv_anim_t * a);
static void nuclear_anim_cb(void * var, int32_t v);

void pvz_start()
{

	  sun_score=0;
		chanzi_btn_select=0;
		sunflower_btn_select=0;
		wandouflower_btn_select=0;
	  wogua_btn_select=0;
	  cherry_btn_select=0;
	  nuclear_btn_select=0;

        lv_obj_clear_flag(lv_scr_act(), LV_OBJ_FLAG_SCROLLABLE);
 			map1=lv_img_create(lv_scr_act());
		lv_img_set_src(map1, &pvz_map_1);
		lv_obj_clear_flag(map1, LV_OBJ_FLAG_SCROLLABLE);
		lv_obj_add_event_cb(map1,map_click_cb,LV_EVENT_RELEASED,0);

		score_lable=lv_label_create(map1);
		lv_label_set_text_fmt(score_lable, "%d",sun_score);
		lv_obj_set_style_text_color(score_lable,lv_color_hex(0xffffff), LV_PART_MAIN);
		lv_obj_set_pos(score_lable,10,30);


		botton_exit=lv_btn_create(map1);
		lv_obj_set_style_bg_color(botton_exit,lv_color_hex(0x6f3011), LV_PART_MAIN);
		lv_obj_set_pos(botton_exit,400,0);
		exit_lable=lv_label_create(botton_exit);
		lv_label_set_text(exit_lable, "<EXIT");
		lv_obj_set_style_text_color(exit_lable,lv_color_hex(0xffffff), LV_PART_MAIN);
		lv_obj_add_event_cb(botton_exit,exit_game_cb,LV_EVENT_RELEASED,0);

		sunflower_btn=lv_btn_create(map1);
		lv_obj_set_pos(sunflower_btn,52,-2);
		lv_obj_set_size(sunflower_btn,33,45);
		lv_obj_set_style_bg_color(sunflower_btn,lv_color_hex(0x000000),LV_PART_MAIN);
		lv_obj_set_style_bg_opa(sunflower_btn,160,LV_PART_MAIN);
		lv_obj_set_style_border_width(sunflower_btn, 2, LV_PART_MAIN);
		lv_obj_set_style_border_color(sunflower_btn, lv_color_hex(0xffffff), LV_PART_MAIN);
		lv_obj_set_style_border_opa(sunflower_btn,0, LV_PART_MAIN);
		lv_obj_add_event_cb(sunflower_btn,sunflower_btn_cb,LV_EVENT_RELEASED,0);
		lv_obj_clear_flag(sunflower_btn, LV_OBJ_FLAG_CLICKABLE);

		wandouflower_btn=lv_btn_create(map1);
		lv_obj_set_pos(wandouflower_btn,87,-2);
		lv_obj_set_size(wandouflower_btn,33,45);
		lv_obj_set_style_bg_color(wandouflower_btn,lv_color_hex(0x000000),LV_PART_MAIN);
		lv_obj_set_style_bg_opa(wandouflower_btn,160,LV_PART_MAIN);
		lv_obj_set_style_border_width(wandouflower_btn, 2, LV_PART_MAIN);
		lv_obj_set_style_border_color(wandouflower_btn, lv_color_hex(0xffffff), LV_PART_MAIN);
		lv_obj_set_style_border_opa(wandouflower_btn,0, LV_PART_MAIN);
		lv_obj_add_event_cb(wandouflower_btn,wandouflower_btn_cb,LV_EVENT_RELEASED,0);
		lv_obj_clear_flag(wandouflower_btn, LV_OBJ_FLAG_CLICKABLE);


		wogua_btn=lv_btn_create(map1);
		lv_obj_set_pos(wogua_btn,122,-2);
		lv_obj_set_size(wogua_btn,33,45);
		lv_obj_set_style_bg_color(wogua_btn,lv_color_hex(0x000000),LV_PART_MAIN);
		lv_obj_set_style_bg_opa(wogua_btn,160,LV_PART_MAIN);
		lv_obj_set_style_border_width(wogua_btn, 2, LV_PART_MAIN);
		lv_obj_set_style_border_color(wogua_btn, lv_color_hex(0xffffff), LV_PART_MAIN);
		lv_obj_set_style_border_opa(wogua_btn,0, LV_PART_MAIN);
		lv_obj_add_event_cb(wogua_btn,wogua_btn_cb,LV_EVENT_RELEASED,0);
		lv_obj_clear_flag(wogua_btn, LV_OBJ_FLAG_CLICKABLE);

		cherry_btn=lv_btn_create(map1);
		lv_obj_set_pos(cherry_btn,157,-2);
		lv_obj_set_size(cherry_btn,33,45);
		lv_obj_set_style_bg_color(cherry_btn,lv_color_hex(0x000000),LV_PART_MAIN);
		lv_obj_set_style_bg_opa(cherry_btn,160,LV_PART_MAIN);
		lv_obj_set_style_border_width(cherry_btn, 2, LV_PART_MAIN);
		lv_obj_set_style_border_color(cherry_btn, lv_color_hex(0xffffff), LV_PART_MAIN);
		lv_obj_set_style_border_opa(cherry_btn,0, LV_PART_MAIN);
		lv_obj_add_event_cb(cherry_btn,cherry_btn_cb,LV_EVENT_RELEASED,0);
		lv_obj_clear_flag(cherry_btn, LV_OBJ_FLAG_CLICKABLE);

		nuclear_btn=lv_btn_create(map1);
		lv_obj_set_pos(nuclear_btn,192,-2);
		lv_obj_set_size(nuclear_btn,33,45);
		lv_obj_set_style_bg_color(nuclear_btn,lv_color_hex(0x000000),LV_PART_MAIN);
		lv_obj_set_style_bg_opa(nuclear_btn,160,LV_PART_MAIN);
		lv_obj_set_style_border_width(nuclear_btn, 2, LV_PART_MAIN);
		lv_obj_set_style_border_color(nuclear_btn, lv_color_hex(0xffffff), LV_PART_MAIN);
		lv_obj_set_style_border_opa(nuclear_btn,0, LV_PART_MAIN);
		lv_obj_add_event_cb(nuclear_btn,nuclear_btn_cb,LV_EVENT_RELEASED,0);
		lv_obj_clear_flag(nuclear_btn, LV_OBJ_FLAG_CLICKABLE);

		chanzi_btn=lv_btn_create(map1);
		lv_obj_set_pos(chanzi_btn,350,-1);
		lv_obj_set_size(chanzi_btn,43,43);
		lv_obj_set_style_shadow_opa(chanzi_btn,0,LV_PART_MAIN);
		lv_obj_set_style_bg_opa(chanzi_btn,0,LV_PART_MAIN);
		lv_obj_set_style_border_width(chanzi_btn, 2, LV_PART_MAIN);
		lv_obj_set_style_border_color(chanzi_btn, lv_color_hex(0xffffff), LV_PART_MAIN);
		lv_obj_set_style_border_opa(chanzi_btn,0, LV_PART_MAIN);
		lv_obj_add_event_cb(chanzi_btn,chanzi_btn_cb,LV_EVENT_RELEASED,0);

		timer_cb3(0);

		timer_newzb=lv_timer_create(timer_cb1, zb_period, 0);
		timer_movezb=lv_timer_create(timer_cb2, zb_move_speed, 0);
		timer_newshine=lv_timer_create(timer_cb3, shine_period, 0);
    timer_zidan_fly=lv_timer_create(zidan_move, zidan_speed, 0);



}




void wogua_dead_cb(void * var, int32_t v)
{
	int x,y;
	lv_obj_t * user=(lv_obj_t *)var;

	x=lv_obj_get_x(user)+1;
	y=lv_obj_get_y(user)-1;
	lv_obj_set_pos(user,x,y);

}


void wogua_dead_cb2(void * var, int32_t v)
{
	int y;
	lv_obj_t * user=(lv_obj_t *)var;

	y=lv_obj_get_y(user)+1;
	lv_obj_set_y(user,y);
}


void wogua_dead_cb3(void * var, int32_t v)
{
	lv_obj_t * user=(lv_obj_t *)var;
	lv_obj_set_style_img_opa(user,v,LV_PART_MAIN);
}



void wogua_delect_cb(lv_anim_t * a)
{
	 wogua_type * user=(wogua_type *)a->user_data;
	 user->alive=0;
	 lv_obj_del(user->wogua);

}


void hit_zb_cb(void * var, int32_t v)
{
	lv_obj_t * user=(lv_obj_t *)var;

	lv_obj_set_style_img_opa(user,v,0);

}


void nuclear_anim_cb(void * var, int32_t v)
{
	lv_obj_t * nuclear=(lv_obj_t *)var;
	lv_obj_set_y(nuclear,v);
	lv_img_set_zoom(nuclear,155-v);
}



void nuclear_delete_cb(lv_anim_t * a)
{
	int i;
		lv_obj_t * nuclear=(lv_obj_t *)a->var;

		lv_obj_t * nuclear_boom=lv_img_create(map1);
		lv_img_set_src(nuclear_boom, &nuclear_boom_img);
	  lv_obj_center(nuclear_boom);


		lv_anim_t a1;
		lv_anim_init(&a1);
		lv_anim_set_var(&a1,nuclear_boom);
		lv_anim_set_exec_cb(&a1,nuclear_boom_anim_cb);
	  lv_anim_set_ready_cb(&a1,nuclear_boom_delete_cb);
		lv_anim_set_time(&a1,1000);
		lv_anim_set_values(&a1,0,20);
		lv_anim_start(&a1);

	  for(i=0;i<max_quantity;i++)
	    {if(zb_matrix[i].live>0)
				 {
					zb_matrix[i].live=0;

					lv_anim_del(zb_matrix[i].zb,zb_move_cb);
					lv_obj_set_style_img_recolor(zb_matrix[i].zb, lv_color_hex(0x000000),0);
          lv_obj_set_style_img_recolor_opa(zb_matrix[i].zb,255,0);


					lv_anim_t a;
					lv_anim_init(&a);
					lv_anim_set_var(&a,zb_matrix[i].zb);
					lv_anim_set_exec_cb(&a,anim_zb_dead_cb);
					lv_anim_set_path_cb(&a, lv_anim_path_ease_in);
					lv_anim_set_time(&a,2000);
					lv_anim_set_values(&a,0,200);
					lv_anim_set_user_data(&a,&zb_matrix[i]);
					lv_anim_set_ready_cb(&a, anim_zb_delect_cb);
					lv_anim_start(&a);

				 }
			 }


	  lv_obj_del(nuclear);

}


void cherry_anim_cb(void * var, int32_t v)
{
	lv_obj_t * cherry=(lv_obj_t *)var;

	lv_img_set_zoom(cherry,255+v*15);

}






void cherry_delete_cb(lv_anim_t * a)
{
	int i;
		lv_obj_t * cherry=(lv_obj_t *)a->var;
		int x=lv_obj_get_x(cherry);
		int y=lv_obj_get_y(cherry);

		lv_obj_t * boom=lv_img_create(map1);
		lv_img_set_src(boom, &cherry_boom_img);
	  lv_img_set_zoom(boom,400);
		lv_obj_set_pos(boom,x-30,y-10);


		lv_anim_t a1;
		lv_anim_init(&a1);
		lv_anim_set_var(&a1,boom);
		lv_anim_set_exec_cb(&a1,boom_anim_cb);
	  lv_anim_set_ready_cb(&a1,boom_delete_cb);
		lv_anim_set_time(&a1,500);
		lv_anim_set_values(&a1,0,1);
		lv_anim_start(&a1);

	for(i=0;i<max_quantity;i++)
	    {if(zb_matrix[i].live>0&&lv_obj_get_x(zb_matrix[i].zb)-x<80&&x-lv_obj_get_x(zb_matrix[i].zb)<80&&lv_obj_get_y(zb_matrix[i].zb)-y<80&&y-lv_obj_get_y(zb_matrix[i].zb)<80)
				 {
					zb_matrix[i].live=0;

					lv_anim_del(zb_matrix[i].zb,zb_move_cb);
					lv_obj_set_style_img_recolor(zb_matrix[i].zb, lv_color_hex(0x000000),0);
          lv_obj_set_style_img_recolor_opa(zb_matrix[i].zb,255,0);


					lv_anim_t a;
					lv_anim_init(&a);
					lv_anim_set_var(&a,zb_matrix[i].zb);
					lv_anim_set_exec_cb(&a,anim_zb_dead_cb);
					lv_anim_set_path_cb(&a, lv_anim_path_ease_in);
					lv_anim_set_time(&a,2000);
					lv_anim_set_values(&a,0,200);
					lv_anim_set_user_data(&a,&zb_matrix[i]);
					lv_anim_set_ready_cb(&a, anim_zb_delect_cb);
					lv_anim_start(&a);

				 }
			 }


	  lv_obj_del(cherry);

}



void boom_delete_cb(lv_anim_t * a)
{
		lv_obj_t * boom=(lv_obj_t *)a->var;

	 	lv_obj_del(boom);

}

void boom_anim_cb(void * var, int32_t v)
{
	return;
}

void nuclear_boom_anim_cb(void * var, int32_t v)
{
	lv_obj_t * nuclear_boom=(lv_obj_t *)var;
	lv_img_set_zoom(nuclear_boom,255+v*20);
}


void nuclear_boom_delete_cb(lv_anim_t * a)
{
		lv_obj_t * nuclear_boom=(lv_obj_t *)a->var;

	 	lv_obj_del(nuclear_boom);
}

void anim_zb_dead_cb(void * var, int32_t v)
{
	lv_obj_t * user=(lv_obj_t *)var;

	if(v<80)
	{lv_img_set_angle(user,-v*10);}
	else
	{
		lv_obj_set_style_img_opa(user,415-2*v,0);
	}
}


void plant_anim_cb(void * var, int32_t v)
{
	wandou_type * xxx=(wandou_type  *)var;

  lv_img_set_angle(xxx->wandouflower,-v*10);

	if(v>=0)
  {lv_obj_set_y(xxx->wandouflower,xxx->y*54+44+v/2);}
	else
	{
		lv_obj_set_y(xxx->wandouflower,xxx->y*54+44-v/2);
	}

}




void anim_zb_delect_cb(lv_anim_t * a)
{
	 zb_type * user=(zb_type *)a->user_data;
		user->alive=0;
	  user->live=0;
    lv_obj_del(user->zb);

}


void timer_led_cb(lv_timer_t * t)
{

}


void timer_cb1(lv_timer_t * t)
{
	int i,j;

			for(j=0;j<max_quantity;j++)
			  {
					if(zb_matrix[j].alive==0)
					{
						zb_matrix[j].alive=1;
						zb_matrix[j].live=zb_maxlive;
						zb_matrix[j].zb=lv_img_create(map1);
	          lv_img_set_src(zb_matrix[j].zb, &zb1);
						zb_matrix[j].y=rand()%5;
						zb_matrix[j].x=480;
            lv_obj_set_pos(zb_matrix[j].zb,480,zb_matrix[j].y*54+35);
						lv_img_set_pivot(zb_matrix[j].zb, 15, 59);

						lv_anim_t a;
						lv_anim_init(&a);
						lv_anim_set_var(&a,zb_matrix[j].zb);
						lv_anim_set_exec_cb(&a,zb_move_cb);
						lv_anim_set_path_cb(&a, lv_anim_path_ease_in);
						lv_anim_set_time(&a,4300);
						lv_anim_set_values(&a,-5,10);
						lv_anim_set_playback_time(&a, 1900);
						lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);
						lv_anim_start(&a);

            return;
					}

				}
}




void timer_cb2(lv_timer_t * t)
{
	int x,i,j;


			for(j=0;j<max_quantity;j++)
			  {
					if(zb_matrix[j].live>0)
					{
						zb_matrix[j].x--;
            lv_obj_set_x(zb_matrix[j].zb,zb_matrix[j].x);

					}

				}

}





void timer_cb3(lv_timer_t * t)
{
	int i,j;

			for(j=0;j<max_quantity;j++)
			  {
					if(shine[j].alive==0)
					{
						shine[j].alive=1;
						shine[j].shine=lv_img_create(map1);
	          lv_img_set_src(shine[j].shine, &sunshine);
						lv_obj_add_flag(shine[j].shine, LV_OBJ_FLAG_CLICKABLE);
						shine[j].x=rand()%400+30;
						shine[j].y=rand()%220+50;
            lv_obj_set_pos(shine[j].shine,shine[j].x,shine[j].y);
						lv_obj_add_event_cb(shine[j].shine,shine_del_cb1,LV_EVENT_RELEASED,&shine[j]);

						lv_anim_t a1;
						lv_anim_init(&a1);
						lv_anim_set_var(&a1,shine[j].shine);
						lv_anim_set_exec_cb(&a1,shine_start_cb1);
						lv_anim_set_path_cb(&a1, lv_anim_path_ease_out);
						lv_anim_set_time(&a1,1000);
						lv_anim_set_values(&a1,shine[j].y,shine[j].y+20);
						lv_anim_set_user_data(&a1,&shine[j]);
						lv_anim_start(&a1);



            return;
					}

				}
}


void shine_start_cb1(void * var, int32_t v)
{
	lv_obj_t * xxx=(lv_obj_t *)var;
	lv_obj_set_y(xxx,v);
}



void add_zidan_cb(lv_timer_t * t)
{
	int x,y,i,j;
	wandou_type * user=(wandou_type *)t->user_data;
	x=user->x;
	y=user->y;


	for(i=0;i<max_quantity;i++)
	{
		if(zidan[i].alive==0)
		{
			zidan[i].alive=1;
			zidan[i].x=x*49+70;
			zidan[i].y=y;

			zidan[i].zidan=lv_btn_create(map1);
			lv_obj_set_pos(zidan[i].zidan,zidan[i].x,y*54+46);
			lv_obj_set_size(zidan[i].zidan,16,16);
			lv_obj_set_style_bg_color(zidan[i].zidan,lv_color_hex(0x40ff40), LV_PART_MAIN);
			lv_obj_set_style_shadow_color(zidan[i].zidan,lv_color_hex(0x004000),LV_PART_MAIN);
			lv_obj_set_style_radius(zidan[i].zidan,8,LV_PART_MAIN);
			lv_obj_set_style_border_width(zidan[i].zidan, 2, LV_PART_MAIN);
			lv_obj_set_style_border_color(zidan[i].zidan,lv_color_hex(0x004000),LV_PART_MAIN);

			lv_obj_clear_flag(zidan[i].zidan, LV_OBJ_FLAG_CLICKABLE);
			return;
		}
	}

}



void zidan_move()
{
int i,j;


	for(i=0;i<max_quantity;i++)
	{
		if(zidan[i].alive==1)
		{
			zidan[i].x+=5;
			if(zidan[i].x>490)
					{
						zidan[i].alive=0;
						lv_obj_del(zidan[i].zidan);
					}
					else
					{lv_obj_set_x(zidan[i].zidan,zidan[i].x);	}

  	}
	}



	for(i=0;i<max_quantity;i++)
	{
		if(zb_matrix[i].live>0)
		{

			for(j=0;j<max_quantity;j++)
			 {
				 if((zidan[j].alive>0&&zb_matrix[i].y==zidan[j].y)&&(zb_matrix[i].x-zidan[j].x<6))
				 {
					zb_matrix[i].live--;
					zidan[j].alive=0;
					lv_img_set_angle(zb_matrix[i].zb,100);

					lv_obj_t * zidan_split=lv_img_create(map1);
					lv_img_set_src(zidan_split, &zidan_split_img);
					lv_obj_set_pos(zidan_split,lv_obj_get_x(zidan[j].zidan)-8,lv_obj_get_y(zidan[j].zidan)-8);

					lv_obj_del(zidan[j].zidan);

					lv_anim_t a;
					lv_anim_init(&a);
					lv_anim_set_var(&a,zidan_split);
					lv_anim_set_exec_cb(&a,zidan_split_cb);
					lv_anim_set_path_cb(&a, lv_anim_path_linear);
					lv_anim_set_time(&a,500);
					lv_anim_set_values(&a,0,1);
					lv_anim_set_ready_cb(&a, zidan_split_delect_cb);
					lv_anim_start(&a);






					lv_anim_t a1;
					lv_anim_init(&a1);
					lv_anim_set_var(&a1,zb_matrix[i].zb);
					lv_anim_set_exec_cb(&a1,hit_zb_cb);
					lv_anim_set_path_cb(&a1, lv_anim_path_linear);
					lv_anim_set_time(&a1,300);
					lv_anim_set_values(&a1,120,255);
					lv_anim_start(&a1);

			   }

				 if(zb_matrix[i].live==0)
				 {

					lv_anim_del(zb_matrix[i].zb,zb_move_cb);
					lv_obj_set_style_img_recolor(zb_matrix[i].zb, lv_color_hex(0x000000),0);
          lv_obj_set_style_img_recolor_opa(zb_matrix[i].zb,255,0);


					lv_anim_t a;
					lv_anim_init(&a);
					lv_anim_set_var(&a,zb_matrix[i].zb);
					lv_anim_set_exec_cb(&a,anim_zb_dead_cb);
					lv_anim_set_path_cb(&a, lv_anim_path_ease_in);
					lv_anim_set_time(&a,2000);
					lv_anim_set_values(&a,0,200);
					lv_anim_set_user_data(&a,&zb_matrix[i]);
					lv_anim_set_ready_cb(&a, anim_zb_delect_cb);
					lv_anim_start(&a);


					break;
				 }

				}

			 }

		 }


		 	for(i=0;i<max_quantity;i++)
				{
					if(zb_matrix[i].live>0)
					{

						for(j=0;j<max_quantity;j++)
						 {
							 if((wogua[j].live>0&&zb_matrix[i].y==wogua[j].y)&&(zb_matrix[i].x-wogua[j].x*49<80))
							 {
								wogua[j].live=0;
								zb_matrix[i].live=0;



								lv_anim_t a2;
								lv_anim_init(&a2);
								lv_anim_set_var(&a2,wogua[j].wogua);
								lv_anim_set_exec_cb(&a2,wogua_dead_cb);
								lv_anim_set_path_cb(&a2, lv_anim_path_ease_in);
								lv_anim_set_time(&a2,300);
								lv_anim_set_values(&a2,0,80);
								lv_anim_start(&a2);


								lv_anim_t a3;
								lv_anim_init(&a3);
								lv_anim_set_var(&a3,wogua[j].wogua);
								lv_anim_set_exec_cb(&a3,wogua_dead_cb2);
								lv_anim_set_path_cb(&a3, lv_anim_path_ease_in);
								lv_anim_set_time(&a3,300);
								lv_anim_set_delay(&a3,600);
								lv_anim_set_values(&a3,0,100);
								lv_anim_start(&a3);



								lv_anim_t a4;
								lv_anim_init(&a4);
								lv_anim_set_var(&a4,wogua[j].wogua);
								lv_anim_set_exec_cb(&a4,wogua_dead_cb3);
								lv_anim_set_path_cb(&a4, lv_anim_path_ease_in);
								lv_anim_set_time(&a4,1000);
								lv_anim_set_delay(&a4,700);
								lv_anim_set_values(&a4,255,0);
								lv_anim_set_user_data(&a4,&wogua[j]);
								lv_anim_set_ready_cb(&a4, wogua_delect_cb);
								lv_anim_start(&a4);





								lv_anim_del(zb_matrix[i].zb,zb_move_cb);
								lv_anim_t a1;
								lv_anim_init(&a1);
								lv_anim_set_var(&a1,zb_matrix[i].zb);
								lv_anim_set_exec_cb(&a1,anim_zb_dead_cb);
								lv_anim_set_path_cb(&a1, lv_anim_path_ease_in);
								lv_anim_set_start_cb(&a1, zb_del_start_cb);
								lv_anim_set_time(&a1,2000);
								lv_anim_set_delay(&a1,1000);
								lv_anim_set_values(&a1,0,200);
								lv_anim_set_user_data(&a1,&zb_matrix[i]);
								lv_anim_set_ready_cb(&a1, anim_zb_delect_cb);
								lv_anim_start(&a1);
								lv_img_set_pivot(zb_matrix[i].zb, 15, 59);

								break;
							 }

							}

						 }

					 }

}



void zb_del_start_cb(lv_anim_t * a)
{
	lv_obj_t * xxx=(lv_obj_t *)a->var;
	lv_obj_set_style_img_recolor(xxx, lv_color_hex(0x000000),0);
	lv_obj_set_style_img_recolor_opa(xxx,255,0);

}



void shine_del_cb1(lv_event_t * e)
{
	shine_type * user=(shine_type *)lv_event_get_user_data(e);
	lv_anim_del(user->shine,shine_start_cb1);
  lv_obj_clear_flag(user->shine, LV_OBJ_FLAG_CLICKABLE);

	lv_anim_t a1;
  lv_anim_init(&a1);
  lv_anim_set_var(&a1,user->shine);
	lv_anim_set_exec_cb(&a1,anim_cb1);
	lv_anim_set_path_cb(&a1, lv_anim_path_ease_out);
	lv_anim_set_time(&a1,500);
	lv_anim_set_values(&a1,user->x,10);
	lv_anim_start(&a1);

	lv_anim_t a2;
  lv_anim_init(&a2);
  lv_anim_set_var(&a2,user->shine);
	lv_anim_set_exec_cb(&a2,anim_cb2);
	lv_anim_set_path_cb(&a2, lv_anim_path_ease_out);
	lv_anim_set_time(&a2,500);
	lv_anim_set_values(&a2,lv_obj_get_y(user->shine),0);
	lv_anim_set_user_data(&a2,user);
	lv_anim_set_ready_cb(&a2, shine_delect_cb);
	lv_anim_start(&a2);

}




void zidan_split_cb(void * var, int32_t v)
{


}

void zidan_split_delect_cb(lv_anim_t * a)
{
	lv_obj_t * xxx=(lv_obj_t *)a->var;

	lv_obj_del(xxx);
}

void zb_move_cb(void * var, int32_t v)
{
	lv_obj_t * xxx=(lv_obj_t *)var;
	lv_img_set_angle(xxx,v*10);

}


void anim_cb1(void * var, int32_t v)
{
	lv_obj_t * xxx=(lv_obj_t *)var;
	lv_obj_set_x(xxx,v);
}
void anim_cb2(void * var, int32_t v)
{
	lv_obj_t * xxx=(lv_obj_t *)var;
	lv_obj_set_y(xxx,v);
}


void shine_delect_cb(lv_anim_t * a)
{
  shine_type * user=(shine_type *)a->user_data;
	user->alive=0;
  lv_obj_del(user->shine);
	sun_score+=50;
	lv_label_set_text_fmt(score_lable, "%d",sun_score);

	if(sun_score>49)
	{
	 lv_obj_set_style_bg_opa(sunflower_btn,0,LV_PART_MAIN);
	 lv_obj_add_flag(sunflower_btn, LV_OBJ_FLAG_CLICKABLE);
	}

	if(sun_score>99)
	{
	 lv_obj_set_style_bg_opa(wandouflower_btn,0,LV_PART_MAIN);
	 lv_obj_add_flag(wandouflower_btn, LV_OBJ_FLAG_CLICKABLE);
	}

	if(sun_score>199)
	{
	 lv_obj_set_style_bg_opa(wogua_btn,0,LV_PART_MAIN);
	 lv_obj_add_flag(wogua_btn, LV_OBJ_FLAG_CLICKABLE);
	}

	if(sun_score>299)
	{
	 lv_obj_set_style_bg_opa(cherry_btn,0,LV_PART_MAIN);
	 lv_obj_add_flag(cherry_btn, LV_OBJ_FLAG_CLICKABLE);
	}

		if(sun_score>399)
	{
	 lv_obj_set_style_bg_opa(nuclear_btn,0,LV_PART_MAIN);
	 lv_obj_add_flag(nuclear_btn, LV_OBJ_FLAG_CLICKABLE);
	}

}



void sunflower_btn_cb(lv_event_t * e)
{
 if(sunflower_btn_select==0)
{
	lv_obj_set_style_border_opa(sunflower_btn,255, LV_PART_MAIN);
	lv_obj_set_style_border_opa(wandouflower_btn,0, LV_PART_MAIN);
	lv_obj_set_style_border_opa(wogua_btn,0, LV_PART_MAIN);
	lv_obj_set_style_border_opa(cherry_btn,0, LV_PART_MAIN);
	lv_obj_set_style_border_opa(chanzi_btn,0, LV_PART_MAIN);
	lv_obj_set_style_border_opa(nuclear_btn,0, LV_PART_MAIN);
	lv_obj_add_flag(map1, LV_OBJ_FLAG_CLICKABLE);
	sunflower_btn_select=1;
	wandouflower_btn_select=0;
	chanzi_btn_select=0;
	wogua_btn_select=0;
	cherry_btn_select=0;
	nuclear_btn_select=0;
}
else{

    lv_obj_set_style_border_opa(sunflower_btn,0, LV_PART_MAIN);
    sunflower_btn_select=0;
}


}

void wandouflower_btn_cb(lv_event_t * e)
{
    if(wandouflower_btn_select==0)
    {
      lv_obj_set_style_border_opa(sunflower_btn,0, LV_PART_MAIN);
lv_obj_set_style_border_opa(wandouflower_btn,255, LV_PART_MAIN);
lv_obj_set_style_border_opa(wogua_btn,0, LV_PART_MAIN);
lv_obj_set_style_border_opa(chanzi_btn,0, LV_PART_MAIN);
lv_obj_set_style_border_opa(cherry_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(nuclear_btn,0, LV_PART_MAIN);
lv_obj_add_flag(map1, LV_OBJ_FLAG_CLICKABLE);
sunflower_btn_select=0;
wandouflower_btn_select=1;
chanzi_btn_select=0;
wogua_btn_select=0;
cherry_btn_select=0;
			nuclear_btn_select=0;
    }
else{

    lv_obj_set_style_border_opa(wandouflower_btn,0, LV_PART_MAIN);
    wandouflower_btn_select=0;
}

}


void wogua_btn_cb(lv_event_t * e)
{
    if(wogua_btn_select==0)
    {
			lv_obj_set_style_border_opa(sunflower_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(wandouflower_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(wogua_btn,255, LV_PART_MAIN);
			lv_obj_set_style_border_opa(chanzi_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(cherry_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(nuclear_btn,0, LV_PART_MAIN);
			lv_obj_add_flag(map1, LV_OBJ_FLAG_CLICKABLE);
			sunflower_btn_select=0;
			wandouflower_btn_select=0;
			wogua_btn_select=1;
			chanzi_btn_select=0;
			cherry_btn_select=0;
			nuclear_btn_select=0;
    }
    else
    {
   lv_obj_set_style_border_opa(wogua_btn,0, LV_PART_MAIN);
    wogua_btn_select=0;

    }
}


void cherry_btn_cb(lv_event_t * e)
{
    if(cherry_btn_select==0)
    {
			lv_obj_set_style_border_opa(cherry_btn,255, LV_PART_MAIN);
			lv_obj_set_style_border_opa(sunflower_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(wandouflower_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(wogua_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(chanzi_btn,0, LV_PART_MAIN);
			lv_obj_add_flag(map1, LV_OBJ_FLAG_CLICKABLE);
			lv_obj_set_style_border_opa(nuclear_btn,0, LV_PART_MAIN);
			sunflower_btn_select=0;
			wandouflower_btn_select=0;
			wogua_btn_select=0;
			chanzi_btn_select=0;
			cherry_btn_select=1;
			nuclear_btn_select=0;
    }
    else
    {
    lv_obj_set_style_border_opa(cherry_btn,0, LV_PART_MAIN);
    cherry_btn_select=0;

    }
}

void nuclear_btn_cb(lv_event_t * e)
{
    if(nuclear_btn_select==0)
    {
			lv_obj_set_style_border_opa(cherry_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(sunflower_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(wandouflower_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(wogua_btn,0, LV_PART_MAIN);
			lv_obj_set_style_border_opa(chanzi_btn,0, LV_PART_MAIN);
			lv_obj_add_flag(map1, LV_OBJ_FLAG_CLICKABLE);
			lv_obj_set_style_border_opa(nuclear_btn,255, LV_PART_MAIN);
			sunflower_btn_select=0;
			wandouflower_btn_select=0;
			wogua_btn_select=0;
			chanzi_btn_select=0;
			cherry_btn_select=0;
			nuclear_btn_select=1;

    }
    else
    {
    lv_obj_set_style_border_opa(nuclear_btn,0, LV_PART_MAIN);
    nuclear_btn_select=0;

    }
}



void chanzi_btn_cb(lv_event_t * e)
{
    if(chanzi_btn_select==0)
    {

lv_obj_set_style_border_opa(sunflower_btn,0, LV_PART_MAIN);
lv_obj_set_style_border_opa(wandouflower_btn,0, LV_PART_MAIN);
lv_obj_set_style_border_opa(wogua_btn,0, LV_PART_MAIN);
lv_obj_set_style_border_opa(cherry_btn,0, LV_PART_MAIN);
lv_obj_set_style_border_opa(chanzi_btn,255, LV_PART_MAIN);
			lv_obj_set_style_border_opa(nuclear_btn,0, LV_PART_MAIN);
lv_obj_add_flag(map1, LV_OBJ_FLAG_CLICKABLE);
sunflower_btn_select=0;
wandouflower_btn_select=0;
wogua_btn_select=0;
chanzi_btn_select=1;
cherry_btn_select=0;
    }
else
{
    lv_obj_set_style_border_opa(chanzi_btn,0, LV_PART_MAIN);
    chanzi_btn_select=0;
}


}



void map_click_cb(lv_event_t * e)
{

	int x,y,i,j;
	lv_point_t click_point;
	lv_indev_get_point(lv_indev_get_act(), &click_point);

  x=click_point.x/54;
	y=(click_point.y-55)/54;


	if(cherry_btn_select&&(sun_score>299))
	{
						lv_obj_t * cherry=lv_img_create(map1);
	          lv_img_set_src(cherry, &cherry_img);
						lv_obj_clear_flag(cherry, LV_OBJ_FLAG_CLICKABLE);
						lv_obj_set_pos(cherry,x*49+20,y*54+44);


						lv_anim_t a;
						lv_anim_init(&a);
						lv_anim_set_var(&a,cherry);
						lv_anim_set_exec_cb(&a,cherry_anim_cb);
		        lv_anim_set_ready_cb(&a,cherry_delete_cb);
		        lv_anim_set_path_cb(&a,lv_anim_path_ease_out);
						lv_anim_set_time(&a,1000);
						lv_anim_set_values(&a,0,10);
		        lv_anim_start(&a);

						sun_score-=300;
	          lv_label_set_text_fmt(score_lable, "%d",sun_score);
						lv_obj_clear_flag(map1, LV_OBJ_FLAG_CLICKABLE);
						cherry_btn_select=0;
						lv_obj_set_style_border_opa(cherry_btn,0, LV_PART_MAIN);
	          goto new_score;

	}


		if(nuclear_btn_select&&(sun_score>399))
	{
						lv_obj_t * nuclear=lv_img_create(map1);
	          lv_img_set_src(nuclear, &nuclear_img);
						lv_obj_clear_flag(nuclear, LV_OBJ_FLAG_CLICKABLE);
						lv_obj_set_pos(nuclear,225,-100);


						lv_anim_t a;
						lv_anim_init(&a);
						lv_anim_set_var(&a,nuclear);
						lv_anim_set_exec_cb(&a,nuclear_anim_cb);
		        lv_anim_set_ready_cb(&a,nuclear_delete_cb);
		        lv_anim_set_path_cb(&a,lv_anim_path_ease_out);
						lv_anim_set_time(&a,2000);
						lv_anim_set_values(&a,-100,120);
		        lv_anim_start(&a);

						sun_score-=400;
	          lv_label_set_text_fmt(score_lable, "%d",sun_score);
						lv_obj_clear_flag(map1, LV_OBJ_FLAG_CLICKABLE);
						nuclear_btn_select=0;
						lv_obj_set_style_border_opa(nuclear_btn,0, LV_PART_MAIN);
	          goto new_score;

	}


	#if(plant_stackable!=1)
	if(map_flag[y][x]){return;}
	#endif

		if(sunflower_btn_select&&(sun_score>49))
	{
		for(j=0;j<max_quantity;j++)
		{
		  if(sunflower[j].alive==0)
					{
						#if(plant_stackable!=1)
	           map_flag[y][x]=1;
	           #endif

						sunflower[j].alive=1;
						sunflower[j].x=x;
						sunflower[j].y=y;
						sunflower[j].sunflower=lv_img_create(map1);
	          lv_img_set_src(sunflower[j].sunflower, &sun_img);
						lv_obj_clear_flag(sunflower[j].sunflower, LV_OBJ_FLAG_CLICKABLE);
						lv_obj_set_pos(sunflower[j].sunflower,x*49+20,y*54+44);
						lv_img_set_pivot(sunflower[j].sunflower, 23, 55);

						lv_anim_t a;
						lv_anim_init(&a);
						lv_anim_set_var(&a,&sunflower[j]);
						lv_anim_set_exec_cb(&a,plant_anim_cb);
						lv_anim_set_path_cb(&a,lv_anim_path_ease_in_out);
						lv_anim_set_time(&a,1000);
						lv_anim_set_values(&a,-5,5);
						lv_anim_set_playback_time(&a, 1000);
						lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);
						lv_anim_start(&a);

						sun_score-=50;
	          lv_label_set_text_fmt(score_lable, "%d",sun_score);
						lv_obj_clear_flag(map1, LV_OBJ_FLAG_CLICKABLE);
						sunflower_btn_select=0;
						sunflower[j].sunflowertimer=lv_timer_create(sun_creat_cb, sunflower_add_sun_period, &sunflower[j]);
						lv_obj_set_style_border_opa(sunflower_btn,0, LV_PART_MAIN);
	          break;
					}
			}

	}

		if(wandouflower_btn_select&&(sun_score>99))
	{
		for(j=0;j<max_quantity;j++)
		{
		  if(wandouflower[j].alive==0)
					{
						#if(plant_stackable!=1)
	           map_flag[y][x]=1;
	           #endif
						wandouflower[j].alive=1;
						wandouflower[j].x=x;
						wandouflower[j].y=y;
						wandouflower[j].wandouflower=lv_img_create(map1);
	          lv_img_set_src(wandouflower[j].wandouflower, &wandou_img);
						lv_obj_clear_flag(wandouflower[j].wandouflower, LV_OBJ_FLAG_CLICKABLE);
						lv_obj_set_pos(wandouflower[j].wandouflower,x*49+18,y*54+44);
						lv_img_set_pivot(wandouflower[j].wandouflower, 27, 50);

						lv_anim_t a;
						lv_anim_init(&a);
						lv_anim_set_var(&a,&wandouflower[j]);
						lv_anim_set_exec_cb(&a,plant_anim_cb);
						lv_anim_set_path_cb(&a, lv_anim_path_ease_in_out);
						lv_anim_set_time(&a,1000);
						lv_anim_set_values(&a,-5,5);
						lv_anim_set_playback_time(&a, 1000);
						lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);
						lv_anim_start(&a);


						sun_score-=100;
	          lv_label_set_text_fmt(score_lable, "%d",sun_score);
						lv_obj_clear_flag(map1, LV_OBJ_FLAG_CLICKABLE);
						wandouflower_btn_select=0;
						lv_obj_set_style_border_opa(wandouflower_btn,0, LV_PART_MAIN);

						wandouflower[j].zidantimer=lv_timer_create(add_zidan_cb,2000,&wandouflower[j]);
						break;
					}
			}

   }



	if(wogua_btn_select&&(sun_score>199))
	{
		for(j=0;j<max_quantity;j++)
		{
		  if(wogua[j].alive==0)
					{
						#if(plant_stackable!=1)
	           map_flag[y][x]=1;
	           #endif
						wogua[j].alive=1;
						wogua[j].live=1;
						wogua[j].x=x;
						wogua[j].y=y;
						wogua[j].wogua=lv_img_create(map1);
	          lv_img_set_src(wogua[j].wogua, &wogua_img);
						lv_obj_clear_flag(wogua[j].wogua, LV_OBJ_FLAG_CLICKABLE);
						lv_obj_set_pos(wogua[j].wogua,x*49+18,y*54+44);
						sun_score-=200;
	          lv_label_set_text_fmt(score_lable, "%d",sun_score);
						lv_obj_clear_flag(map1, LV_OBJ_FLAG_CLICKABLE);
						wogua_btn_select=0;
						lv_obj_set_style_border_opa(wogua_btn,0, LV_PART_MAIN);

						break;
					}
			}

	}



	if(chanzi_btn_select)
	{
		for(j=0;j<max_quantity;j++)
		{
		  if(wandouflower[j].alive==1&&wandouflower[j].x==x&&wandouflower[j].y==y)
					{
						#if(plant_stackable!=1)
	           map_flag[y][x]=0;
	           #endif
						wandouflower[j].alive=0;
						wandouflower[j].x=0;
						wandouflower[j].y=0;
						lv_anim_del(&wandouflower[j],plant_anim_cb);
						lv_obj_del(wandouflower[j].wandouflower);
						lv_timer_del(wandouflower[j].zidantimer);
						chanzi_btn_select=0;
						lv_obj_set_style_border_opa(chanzi_btn,0,LV_PART_MAIN);
            lv_obj_clear_flag(map1, LV_OBJ_FLAG_CLICKABLE);
						break;
					}


			if(sunflower[j].alive==1&&sunflower[j].x==x&&sunflower[j].y==y)
					{
						#if(plant_stackable!=1)
	           map_flag[y][x]=0;
	           #endif
						sunflower[j].alive=0;
						sunflower[j].x=0;
						sunflower[j].y=0;
						lv_anim_del(&sunflower[j],plant_anim_cb);
						lv_obj_del(sunflower[j].sunflower);
						lv_timer_del(sunflower[j].sunflowertimer);
						chanzi_btn_select=0;
						lv_obj_set_style_border_opa(chanzi_btn,0,LV_PART_MAIN);
            lv_obj_clear_flag(map1, LV_OBJ_FLAG_CLICKABLE);
						break;
					}

					if(wogua[j].alive==1&&wogua[j].x==x&&wogua[j].y==y)
					{
						#if(plant_stackable!=1)
	           map_flag[y][x]=0;
	           #endif
						wogua[j].alive=0;
						wogua[j].x=0;
						wogua[j].y=0;
						lv_obj_del(wogua[j].wogua);
						chanzi_btn_select=0;
						lv_obj_set_style_border_opa(chanzi_btn,0,LV_PART_MAIN);
            lv_obj_clear_flag(map1, LV_OBJ_FLAG_CLICKABLE);
						break;
					}

	 	}

	}

	new_score:

		if(sun_score<50)
			{
				lv_obj_set_style_bg_opa(sunflower_btn,160,LV_PART_MAIN);
				lv_obj_clear_flag(sunflower_btn, LV_OBJ_FLAG_CLICKABLE);
			}

		if(sun_score<100)
			{
				lv_obj_set_style_bg_opa(wandouflower_btn,160,LV_PART_MAIN);
				lv_obj_clear_flag(wandouflower_btn, LV_OBJ_FLAG_CLICKABLE);
			}

		if(sun_score<200)
			{
				lv_obj_set_style_bg_opa(wogua_btn,160,LV_PART_MAIN);
				lv_obj_clear_flag(wogua_btn, LV_OBJ_FLAG_CLICKABLE);
			}

		if(sun_score<300)
			{
				lv_obj_set_style_bg_opa(cherry_btn,160,LV_PART_MAIN);
				lv_obj_clear_flag(cherry_btn, LV_OBJ_FLAG_CLICKABLE);
			}

			if(sun_score<400)
			{
				lv_obj_set_style_bg_opa(nuclear_btn,160,LV_PART_MAIN);
				lv_obj_clear_flag(nuclear_btn, LV_OBJ_FLAG_CLICKABLE);
			}



}







void sun_creat_cb(lv_timer_t * t)
{
	int x,y,i,j;
	sunflower_type * user=(sunflower_type *)t->user_data;
	x=user->x;
	y=user->y;

	for(j=0;j<max_quantity;j++)
			  {
					if(shine[j].alive==0)
					{
						shine[j].alive=1;
						shine[j].shine=lv_img_create(map1);
	          lv_img_set_src(shine[j].shine, &sunshine);
						lv_obj_add_flag(shine[j].shine, LV_OBJ_FLAG_CLICKABLE);
						shine[j].x=x*49+20;
						shine[j].y=y*54+44;
						lv_obj_set_pos(shine[j].shine,shine[j].x,shine[j].y);
						lv_obj_add_event_cb(shine[j].shine,shine_del_cb1,LV_EVENT_RELEASED,&shine[j]);

						lv_anim_t a1;
						lv_anim_init(&a1);
						lv_anim_set_var(&a1,shine[j].shine);
						lv_anim_set_exec_cb(&a1,shine_start_cb1);
						lv_anim_set_path_cb(&a1, lv_anim_path_ease_out);
						lv_anim_set_time(&a1,1000);
						lv_anim_set_values(&a1,shine[j].y,shine[j].y+20);
						lv_anim_set_user_data(&a1,&shine[j]);
						lv_anim_start(&a1);

	          return;
					}

		}
}


void init_shine_zb()
{
	int i,j;

	for(j=0;j<max_quantity;j++)
		{
			shine[j].alive=0;
			zb_matrix[j].alive=0;
			zb_matrix[j].live=0;
			wogua[j].alive=0;
			wogua[j].live=0;
			zidan[j].alive=0;

			if(wandouflower[j].alive==1)
			{
				wandouflower[j].alive=0;
				lv_timer_del(wandouflower[j].zidantimer);
			}

			if(sunflower[j].alive==1)
			{
				sunflower[j].alive=0;
				lv_timer_del(sunflower[j].sunflowertimer);
			}
		}

		#if(plant_stackable!=1)
		for(i=0;i<9;i++)
		 {
		   for(j=0;j<5;j++)

	          { map_flag[j][i]=0;}
	   }
		#endif
}



void exit_game_cb(lv_event_t * e)
{
  lv_anim_del_all();
	lv_timer_del(timer_newzb);
	lv_timer_del(timer_movezb);
	lv_timer_del(timer_newshine);
	lv_timer_del(timer_zidan_fly);
	init_shine_zb();
	lv_obj_clean(map1);
	lv_obj_del(map1);
}

