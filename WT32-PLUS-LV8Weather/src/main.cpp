#include "web_api.h"
#include "wt32_lv.h"
#include "wt32_wifi.h"
#include <Arduino.h>

long check1s = 0;
long check5ms = 0;
long check5min = 0;

lv_obj_t *label_date;
lv_obj_t *label_time;
lv_obj_t *label_weather;
lv_obj_t *label_ip;

json city_info;
json weather_info;

void ui_init(void) {
  auto *parent = lv_scr_act();

  label_date = lv_label_create(parent);
  lv_obj_align(label_date, LV_ALIGN_TOP_LEFT, 10, 10);
  lv_obj_set_style_text_font(label_date, &lv_font_montserrat_32, LV_PART_MAIN);
  lv_label_set_text(label_date, "2000-01-01");

  label_time = lv_label_create(parent);
  lv_obj_align(label_time, LV_ALIGN_TOP_LEFT, 10, 50);
  lv_obj_set_style_text_font(label_time, &lv_font_montserrat_32, LV_PART_MAIN);
  lv_label_set_text(label_time, "14:56:22");

  label_weather = lv_label_create(parent);
  lv_obj_align(label_weather, LV_ALIGN_TOP_LEFT, 10, 90);
  lv_obj_set_style_text_font(label_weather, &lv_font_montserrat_48,
                             LV_PART_MAIN);
  lv_label_set_text(label_weather, "Some Weather");

  label_ip = lv_label_create(parent);
  lv_obj_align(label_ip, LV_ALIGN_BOTTOM_LEFT, 10, -10);
  lv_label_set_text(label_ip, "IP: 0:0:0:0");
}

inline void showClientIP() {
  sprintf(buf, "IP: %s", WiFi.localIP().toString().c_str());
  lv_label_set_text(label_ip, buf);
}

inline void lv_update_weather() {
  int cityId = city_info["cityId"];
  weather_info = get_city_weather_info(cityId);
  // int tmp = weather_info["temperature"];
  // sprintf(buf, "%d °C", tmp);
  json huge = get_now_huge_info(cityId);
  int tmp = huge["TEMP"];
  sprintf(buf, "%d °C", tmp);
  lv_label_set_text(label_weather, buf);
}

inline void showCurrentTime() {
  struct tm info;
  getLocalTime(&info);
  strftime(buf, 32, "%F", &info);
  lv_label_set_text(label_date, buf);

  strftime(buf, 32, "%T", &info);
  lv_label_set_text(label_time, buf);
}

void inline startConfigTime() {
  const int timeZone = 8 * 3600;
  configTime(timeZone, 0, "ntp6.aliyun.com", "cn.ntp.org.cn", "ntp.ntsc.ac.cn");
  while (time(nullptr) < 8 * 3600 * 2) {
    delay(500);
  }
  sprintf(buf, "%s", WiFi.localIP().toString().c_str());
  tft.println(buf);
  struct tm info;
  getLocalTime(&info);
  strftime(buf, 64, "%c", &info);
  tft.println(buf);
}

void setup() {
  Serial.begin(115200);
  init_wt32_lvgl();
  ui_init();
  autoConfigWifi();
  tft.println("WiFi Connected!!");
  startConfigTime();
  setupOTAConfig();
  showClientIP();
  city_info = get_cur_city_info();
  lv_update_weather();
}

void loop() {
  auto ms = millis();
  if (ms - check1s > 1000) {
    check1s = ms;
    ArduinoOTA.handle();
    showCurrentTime();
  }
  if (ms - check5ms > 5) {
    check5ms = ms;
    lv_timer_handler();
  }
  if (ms - check5min > 5 * 60 * 1000) {
    check5min = ms;
    lv_update_weather();
  }
}