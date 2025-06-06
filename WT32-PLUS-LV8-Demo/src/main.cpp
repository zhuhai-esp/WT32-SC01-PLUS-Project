#include "lgfx.h"
#include <Arduino.h>
#include <demos/lv_demos.h>
#include <lvgl.h>

#define LV_DISP_HOR_RES 480
#define LV_DISP_VER_RES 320

LGFX tft;

static lv_disp_draw_buf_t draw_buf;
static lv_disp_drv_t disp_drv;

static const uint32_t buf_size =
    LV_DISP_HOR_RES * LV_DISP_VER_RES * sizeof(lv_color_t);
static lv_color_t *dis_buf1;

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area,
                   lv_color_t *color_p) {
  if (tft.getStartCount() == 0) {
    tft.endWrite();
  }
  tft.pushImageDMA(area->x1, area->y1, area->x2 - area->x1 + 1,
                   area->y2 - area->y1 + 1, (lgfx::rgb565_t *)&color_p->full);
  lv_disp_flush_ready(disp); /* tell lvgl that flushing is done */
}

/*Read the touchpad*/
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
  uint16_t touchX, touchY;
  bool touched = tft.getTouch(&touchX, &touchY);
  if (!touched) {
    data->state = LV_INDEV_STATE_REL;
  } else {
    data->state = LV_INDEV_STATE_PR;
    /*Set the coordinates*/
    data->point.x = touchX;
    data->point.y = touchY;
  }
}

void inline lv_disp_init() {
  dis_buf1 = (lv_color_t *)ps_malloc(buf_size);
  lv_disp_draw_buf_init(&draw_buf, dis_buf1, nullptr, buf_size);
  /* Initialize the display */
  lv_disp_drv_init(&disp_drv);
  /* Change the following line to your display resolution */
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);
}

void inline lv_touch_init() {
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);
}

void setup() {
  Serial.begin(115200);
  tft.init();
  tft.initDMA();
  tft.setBrightness(255);
  lv_init();
  lv_disp_init();
  lv_touch_init();
  lv_demo_widgets();
}

void loop() { lv_timer_handler(); }