#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_RP
#define LV_ATTRIBUTE_IMG_RP
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_RP uint8_t rp_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xbf, 0x92, 0xcc, 0x99, 0xee, 0x36, 0xe6, 0xb4, 0xdd, 0xb4, 0xdd, 0x93, 0xd5, 0xa4, 0x92, 0x75, 0xad, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x9e, 0xed, 0xf4, 0x70, 0xed, 0x8a, 0xec, 0x28, 0xf4, 0x28, 0xf4, 0x48, 0xec, 0x08, 0xe4, 0xa6, 0xd3, 0x65, 0xc3, 0xe9, 0xbb, 0x89, 0xb3, 0x0c, 0xac, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0xe5, 0x4d, 0xf5, 0x0a, 0xfd, 0xe9, 0xfc, 0xa8, 0xfc, 0xc8, 0xfc, 0xa8, 0xfc, 0x88, 0xfc, 0x67, 0xfc, 0x27, 0xf4, 0xe7, 0xeb, 0xa6, 0xe3, 0x85, 0xd3, 0x25, 0xc3, 0x27, 0xbb, 0x27, 0xab, 0xec, 0xa3, 0x1a, 0xd7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xed, 0x0b, 0xfd, 0x2a, 0xfd, 0x4a, 0xfd, 0x4a, 0xfd, 0x8c, 0xfd, 0xce, 0xfd, 0xaf, 0xfd, 0x8f, 0xfd, 0x6e, 0xfd, 0x4e, 0xfd, 0x0c, 0xfd, 0xaa, 0xf4, 0x07, 0xec, 0x86, 0xcb, 0x04, 0xc3, 0xc4, 0xb2, 0x84, 0x9a, 0x28, 0x9b, 0xa8, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xed, 0x2c, 0xfd, 0x4b, 0xfd, 0x6c, 0xfd, 0xef, 0xfd, 0x12, 0xfe, 0xf1, 0xfd, 0x71, 0xed, 0x50, 0xed, 0x50, 0xe5, 0x0f, 0xdd, 0x2f, 0xed, 0x2f, 0xed, 0x2e, 0xe5, 0x0e, 0xed, 0xac, 0xe4, 0xc8, 0xd3, 0xe5, 0xb2, 0x83, 0xa2, 0x22, 0x8a, 0x24, 0x7a, 0x50, 0xac, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0xf5, 0x2b, 0xfd, 0x8c, 0xfd, 0x10, 0xfe, 0x94, 0xfe, 0x13, 0xfe, 0x91, 0xf5, 0x50, 0xe5, 0x71, 0xe5, 0xf4, 0xed, 0xb2, 0xf5, 0xb1, 0xf5, 0x70, 0xed, 0x4f, 0xed, 0xee, 0xdc, 0xcd, 0xd4, 0xad, 0xdc, 0x0e, 0xed, 0xcc, 0xe4, 0x46, 0xc3, 0x63, 0x92, 0x02, 0x82, 0x24, 0x7a, 0x0e, 0x94, 0xbb, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb2, 0xed, 0x4b, 0xfd, 0xcc, 0xfd, 0x71, 0xfe, 0xb5, 0xfe, 0xf2, 0xf5, 0x4f, 0xe5, 0xd2, 0xed, 0x34, 0xfe, 0x33, 0xfe, 0xb1, 0xfd, 0x90, 0xfd, 0x6f, 0xf5, 0x6f, 0xf5, 0x6f, 0xf5, 0x6f, 0xf5, 0x4f, 0xf5, 0xcc, 0xe4, 0x6b, 0xd4, 0xed, 0xe4, 0x0d, 0xed, 0xc8, 0xc3, 0x43, 0x92, 0xc1, 0x71, 0xe4, 0x69, 0x6c, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe4, 0xea, 0xfc, 0x6b, 0xfd, 0x51, 0xfe, 0x95, 0xfe, 0x50, 0xed, 0x50, 0xdd, 0x13, 0xf6, 0xf2, 0xfd, 0x90, 0xf5, 0x70, 0xf5, 0x70, 0xf5, 0x90, 0xf5, 0x6f, 0xf5, 0x4f, 0xf5, 0x4e, 0xf5, 0x4f, 0xf5, 0x0e, 0xed, 0x2e, 0xed, 0xed, 0xec, 0x4b, 0xd4, 0x4b, 0xd4, 0x2e, 0xed, 0x88, 0xbb, 0xc2, 0x79, 0x61, 0x69, 0x42, 0x51, 0xee, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xd6, 0x2d, 0xed, 0x2a, 0xfd, 0x10, 0xfe, 0x95, 0xfe, 0x90, 0xf5, 0x72, 0xed, 0xd3, 0xf5, 0x91, 0xf5, 0xb1, 0xf5, 0x70, 0xf5, 0x70, 0xf5, 0x70, 0xf5, 0xee, 0xec, 0x8c, 0xdc, 0x8b, 0xe4, 0x6c, 0xe4, 0xcd, 0xe4, 0x0e, 0xed, 0x0e, 0xed, 0x2e, 0xed, 0x0d, 0xed, 0x4a, 0xd4, 0x4b, 0xcc, 0x0d, 0xed, 0x06, 0xab, 0x82, 0x71, 0x62, 0x59, 0x05, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0xe5, 0xaa, 0xfc, 0x8d, 0xfd, 0x54, 0xfe, 0xd1, 0xf5, 0x2f, 0xe5, 0x13, 0xfe, 0x8a, 0xd3, 0xc3, 0xb9, 0x49, 0xcb, 0x65, 0xc2, 0x24, 0xc2, 0xc3, 0xb9, 0x01, 0xb1, 0x01, 0xb1, 0x01, 0xb1, 0x01, 0xb1, 0x01, 0xb1, 0x82, 0xb9, 0x45, 0xc2, 0x47, 0xd3, 0x2a, 0xdc, 0xec, 0xec, 0x2a, 0xcc, 0x6b, 0xd4, 0xcb, 0xe4, 0x03, 0x82, 0x21, 0x59, 0x42, 0x51, 0x70, 0x9c, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xef, 0x6b, 0xe4, 0x89, 0xfc, 0x8e, 0xfd, 0xd2, 0xfd, 0xee, 0xdc, 0x50, 0xed, 0x70, 0xf5, 0x2b, 0xdc, 0xe0, 0xb0, 0xc0, 0xb0, 0xc0, 0xb0, 0x62, 0xb1, 0x25, 0xc2, 0xe8, 0xca, 0x89, 0xd3, 0xaa, 0xd3, 0x29, 0xcb, 0x86, 0xc2, 0xc4, 0xb9, 0x82, 0xb9, 0x63, 0xb1, 0x2b, 0xdc, 0xed, 0xec, 0x6b, 0xdc, 0x88, 0xbb, 0x4b, 0xd4, 0x47, 0xb3, 0x21, 0x59, 0x01, 0x49, 0xe9, 0x72, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x16, 0xe6, 0x6a, 0xec, 0xc9, 0xfc, 0xaf, 0xfd, 0x70, 0xf5, 0x0f, 0xe5, 0x91, 0xf5, 0x4e, 0xed, 0x4f, 0xed, 0x85, 0xc2, 0xc0, 0xa8, 0x08, 0xcb, 0xf2, 0xf5, 0xf2, 0xf5, 0xd1, 0xf5, 0x70, 0xf5, 0x4f, 0xed, 0x4f, 0xed, 0x6f, 0xed, 0x6f, 0xf5, 0x0f, 0xed, 0x91, 0xf5, 0x70, 0xed, 0x8c, 0xe4, 0xac, 0xe4, 0x09, 0xd4, 0xa9, 0xbb, 0x6a, 0xdc, 0xe2, 0x71, 0xe0, 0x48, 0x83, 0x59, 0xb2, 0x94, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x85, 0xcb, 0x27, 0xec, 0x0b, 0xfd, 0x90, 0xfd, 0x2f, 0xe5, 0x2f, 0xed, 0x8f, 0xf5, 0x6f, 0xed, 0x90, 0xf5, 0x4b, 0xe4, 0xe0, 0xb0, 0x08, 0xcb, 0x0b, 0xe4, 0xa5, 0xca, 0x23, 0xc2, 0x03, 0xc2, 0x23, 0xc2, 0x03, 0xc2, 0x24, 0xc2, 0x85, 0xc2, 0x06, 0xcb, 0xa8, 0xdb, 0x6a, 0xe4, 0x8b, 0xe4, 0xac, 0xe4, 0xab, 0xe4, 0xc8, 0xc3, 0x6a, 0xdc, 0xc5, 0x9a, 0xe0, 0x48, 0x63, 0x51, 0x8d, 0x83, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xdf, 0xee, 0xdc, 0xe7, 0xe3, 0xeb, 0xfc, 0x50, 0xf5, 0xcd, 0xdc, 0x2f, 0xed, 0x4f, 0xf5, 0x2f, 0xed, 0x4f, 0xf5, 0xed, 0xec, 0xc3, 0xb9, 0xa0, 0xa8, 0xa0, 0xa8, 0x21, 0xb1, 0x42, 0xb1, 0x83, 0xb9, 0x01, 0xb1, 0xc0, 0xb0, 0x21, 0xb1, 0x21, 0xb1, 0xe0, 0xb0, 0x62, 0xb1, 0xcd, 0xe4, 0xab, 0xe4, 0x6b, 0xdc, 0x8b, 0xe4, 0xa8, 0xc3, 0x2a, 0xcc, 0x87, 0xb3, 0x20, 0x51, 0x00, 0x49, 0x8d, 0x83, 0x5a, 0xc6, 
  0x00, 0x00, 0x3c, 0xcf, 0x8c, 0xd4, 0xc7, 0xe3, 0xcb, 0xf4, 0x50, 0xed, 0xce, 0xd4, 0x4e, 0xf5, 0x70, 0xed, 0x6f, 0xed, 0x2f, 0xf5, 0x0d, 0xed, 0x24, 0xc2, 0xc3, 0xb9, 0x2c, 0xdc, 0x0f, 0xed, 0x70, 0xed, 0xb1, 0xf5, 0xa2, 0xb9, 0x25, 0xc2, 0xef, 0xe4, 0xcd, 0xe4, 0x0b, 0xdc, 0xae, 0xe4, 0x4f, 0xed, 0x8b, 0xe4, 0x6b, 0xe4, 0x8b, 0xe4, 0x29, 0xd4, 0x09, 0xcc, 0x29, 0xd4, 0x81, 0x61, 0x20, 0x59, 0x68, 0x6a, 0x5b, 0xbe, 
  0x00, 0x00, 0x8e, 0x93, 0xa8, 0xc3, 0xc6, 0xe3, 0xcb, 0xf4, 0x50, 0xed, 0x0e, 0xdd, 0x90, 0xf5, 0x90, 0xf5, 0x6f, 0xf5, 0x6f, 0xf5, 0x2e, 0xed, 0xe3, 0xb9, 0x08, 0xcb, 0x6f, 0xed, 0xac, 0xe4, 0x4b, 0xe4, 0x48, 0xd3, 0xe0, 0xb0, 0x08, 0xcb, 0x2f, 0xed, 0xed, 0xe4, 0x2e, 0xed, 0x0e, 0xed, 0xed, 0xe4, 0xcc, 0xec, 0xcc, 0xe4, 0xac, 0xe4, 0x4a, 0xdc, 0xc9, 0xc3, 0x6a, 0xdc, 0xa2, 0x71, 0x20, 0x59, 0x87, 0x72, 0x14, 0xa5, 
  0x00, 0x00, 0xa7, 0x72, 0x26, 0xbb, 0xa6, 0xd3, 0x8a, 0xec, 0x4f, 0xed, 0xcd, 0xdc, 0x70, 0xf5, 0x4f, 0xed, 0x0f, 0xed, 0x8d, 0xdc, 0x89, 0xd3, 0x41, 0xb1, 0x01, 0xb1, 0x21, 0xb1, 0x20, 0xb1, 0xa0, 0xa8, 0xa0, 0xa8, 0xc0, 0xa8, 0xe0, 0xb0, 0x82, 0xb9, 0xe4, 0xb9, 0x64, 0xc2, 0x27, 0xcb, 0x88, 0xd3, 0x68, 0xd3, 0xc9, 0xd3, 0x0a, 0xdc, 0x4a, 0xdc, 0xe9, 0xc3, 0x6a, 0xdc, 0xc2, 0x71, 0x20, 0x59, 0x66, 0x6a, 0xd3, 0x9c, 
  0x00, 0x00, 0x8b, 0x93, 0x47, 0xb3, 0x45, 0xcb, 0x49, 0xdc, 0x70, 0xed, 0x0e, 0xdd, 0xa9, 0xd3, 0xe3, 0xb9, 0x62, 0xb1, 0x01, 0xb1, 0xc0, 0xb0, 0xc0, 0xa8, 0x83, 0xb9, 0x45, 0xc2, 0xc7, 0xca, 0x29, 0xcb, 0x29, 0xcb, 0xe8, 0xca, 0x66, 0xc2, 0xc3, 0xb9, 0xe0, 0xb0, 0xa0, 0xa8, 0xe0, 0xb0, 0x01, 0xb1, 0xe0, 0xb0, 0x62, 0xb1, 0x6d, 0xdc, 0x8b, 0xdc, 0xe9, 0xc3, 0x6b, 0xdc, 0xc2, 0x71, 0x20, 0x61, 0x66, 0x6a, 0x92, 0x94, 
  0x00, 0x00, 0x59, 0xae, 0xca, 0xb3, 0xe5, 0xc2, 0xc7, 0xd3, 0x2e, 0xed, 0xed, 0xd4, 0xea, 0xdb, 0xc0, 0xa8, 0xe0, 0xb0, 0xa3, 0xb9, 0x28, 0xcb, 0xae, 0xe4, 0x91, 0xed, 0x70, 0xed, 0x90, 0xf5, 0x90, 0xed, 0x6f, 0xed, 0x4f, 0xed, 0x2e, 0xed, 0x0e, 0xe5, 0x6c, 0xe4, 0x08, 0xcb, 0x62, 0xb1, 0x01, 0xb1, 0x83, 0xb9, 0xae, 0xdc, 0x90, 0xf5, 0x29, 0xd4, 0xe9, 0xc3, 0x09, 0xd4, 0xc2, 0x71, 0x21, 0x61, 0xa8, 0x72, 0x92, 0x94, 
  0x00, 0x00, 0xff, 0xff, 0x6e, 0xb4, 0x83, 0xaa, 0x26, 0xc3, 0xcd, 0xe4, 0xad, 0xd4, 0xcc, 0xe4, 0xca, 0xd3, 0x6d, 0xdc, 0xb2, 0xed, 0xd2, 0xf5, 0x6c, 0xe4, 0x07, 0xcb, 0x45, 0xc2, 0x28, 0xcb, 0xac, 0xe4, 0x8b, 0xe4, 0x27, 0xcb, 0x07, 0xcb, 0x88, 0xd3, 0x2b, 0xd4, 0xad, 0xdc, 0x6c, 0xdc, 0x2c, 0xdc, 0x2f, 0xed, 0x4f, 0xe5, 0x6b, 0xdc, 0xe9, 0xc3, 0x4b, 0xd4, 0xa8, 0xc3, 0xa2, 0x69, 0x61, 0x69, 0x0a, 0x7b, 0xb3, 0x94, 
  0x00, 0x00, 0xff, 0xff, 0xc7, 0x92, 0x64, 0x9a, 0xa4, 0xaa, 0x6b, 0xdc, 0xee, 0xdc, 0x6c, 0xd4, 0x2f, 0xed, 0x2e, 0xed, 0x07, 0xcb, 0xc3, 0xb9, 0x01, 0xb1, 0xa0, 0xa8, 0xe0, 0xb0, 0x6d, 0xdc, 0x4f, 0xe5, 0xac, 0xdc, 0xa6, 0xc2, 0xc0, 0xb0, 0x01, 0xb1, 0x21, 0xb1, 0xe4, 0xb9, 0x48, 0xcb, 0x8b, 0xdc, 0xac, 0xdc, 0x4a, 0xdc, 0x2a, 0xd4, 0xa9, 0xbb, 0x6b, 0xdc, 0x06, 0xab, 0xa2, 0x69, 0x62, 0x61, 0x8d, 0x7b, 0xf4, 0x9c, 
  0x00, 0x00, 0x00, 0x00, 0x90, 0xac, 0x85, 0x92, 0x63, 0x9a, 0x67, 0xc3, 0x0e, 0xed, 0x4b, 0xcc, 0xad, 0xe4, 0xcd, 0xec, 0xc2, 0xb9, 0xa0, 0xa8, 0xe0, 0xb0, 0x04, 0xc2, 0xce, 0xe4, 0xb1, 0xed, 0xcc, 0xdc, 0xab, 0xdc, 0x6b, 0xdc, 0x24, 0xc2, 0xc0, 0xb0, 0xe0, 0xb0, 0xc0, 0xa8, 0xa3, 0xb9, 0xad, 0xe4, 0x4a, 0xdc, 0x6b, 0xdc, 0xe9, 0xcb, 0x2a, 0xc4, 0x8a, 0xdc, 0x43, 0x8a, 0xa1, 0x69, 0xc4, 0x69, 0x30, 0x8c, 0x14, 0xa5, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x44, 0x82, 0x23, 0x8a, 0x84, 0xa2, 0x8b, 0xe4, 0xac, 0xdc, 0x2b, 0xcc, 0xec, 0xec, 0x27, 0xcb, 0x86, 0xc2, 0x8e, 0xdc, 0xb1, 0xf5, 0x70, 0xed, 0xcc, 0xe4, 0x8b, 0xe4, 0x8b, 0xe4, 0xac, 0xe4, 0x8b, 0xdc, 0xa6, 0xc2, 0x01, 0xb1, 0x42, 0xb1, 0x6d, 0xe4, 0x4f, 0xed, 0x6b, 0xdc, 0x6b, 0xdc, 0x09, 0xc4, 0xac, 0xe4, 0xc8, 0xc3, 0xe2, 0x79, 0x81, 0x69, 0xc8, 0x72, 0x72, 0x8c, 0xb6, 0xb5, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x7a, 0xc3, 0x79, 0x23, 0x82, 0xe6, 0xa2, 0xed, 0xe4, 0x2a, 0xcc, 0x4a, 0xd4, 0xcd, 0xe4, 0x2f, 0xed, 0x2e, 0xe5, 0xac, 0xe4, 0x8b, 0xdc, 0x8c, 0xdc, 0x6b, 0xdc, 0x6b, 0xdc, 0x6b, 0xdc, 0x6b, 0xdc, 0x6b, 0xdc, 0x8d, 0xe4, 0x50, 0xed, 0x2f, 0xed, 0x6b, 0xdc, 0x6a, 0xdc, 0xc8, 0xc3, 0x4b, 0xcc, 0x4a, 0xdc, 0x63, 0x8a, 0xa2, 0x71, 0x62, 0x69, 0xae, 0x7b, 0xb2, 0x94, 0x75, 0xad, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x72, 0xe4, 0x69, 0xa2, 0x71, 0xe2, 0x79, 0xc9, 0xc3, 0xed, 0xec, 0x2b, 0xcc, 0x2a, 0xd4, 0xac, 0xe4, 0x8c, 0xdc, 0xac, 0xe4, 0x8b, 0xdc, 0x8b, 0xdc, 0x8b, 0xdc, 0x8b, 0xdc, 0x8b, 0xdc, 0x6a, 0xdc, 0x4b, 0xdc, 0x4b, 0xdc, 0x4a, 0xdc, 0x4a, 0xdc, 0x2a, 0xdc, 0xc8, 0xc3, 0x2a, 0xc4, 0xab, 0xe4, 0xc5, 0xa2, 0xa2, 0x69, 0x41, 0x69, 0x88, 0x72, 0x31, 0x8c, 0xd3, 0x9c, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x7b, 0xa3, 0x61, 0x81, 0x69, 0xe2, 0x79, 0x09, 0xcc, 0x0d, 0xed, 0x2a, 0xcc, 0x0a, 0xcc, 0x8b, 0xe4, 0xac, 0xe4, 0xab, 0xe4, 0xab, 0xdc, 0x8b, 0xdc, 0x6b, 0xdc, 0x8b, 0xe4, 0x6b, 0xdc, 0x6a, 0xdc, 0x4b, 0xdc, 0x6b, 0xdc, 0x29, 0xdc, 0xe9, 0xbb, 0x2b, 0xc4, 0xac, 0xe4, 0x06, 0xa3, 0x81, 0x69, 0x61, 0x61, 0xe4, 0x69, 0xcf, 0x7b, 0x72, 0x94, 0x18, 0xc6, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe6, 0x61, 0x42, 0x59, 0x41, 0x61, 0xa2, 0x69, 0xa8, 0xc3, 0x0d, 0xed, 0x6c, 0xcc, 0xc9, 0xc3, 0x09, 0xcc, 0x4a, 0xdc, 0xac, 0xdc, 0x8b, 0xdc, 0x8b, 0xdc, 0x6b, 0xdc, 0x6b, 0xdc, 0x4b, 0xdc, 0x0a, 0xd4, 0xc9, 0xc3, 0xe9, 0xbb, 0x6c, 0xcc, 0xab, 0xec, 0xe6, 0xa2, 0x61, 0x69, 0x41, 0x61, 0x82, 0x61, 0x6c, 0x73, 0x51, 0x8c, 0xd3, 0x9c, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9b, 0xb6, 0x2b, 0x7b, 0x21, 0x51, 0x20, 0x51, 0x41, 0x59, 0xa5, 0x92, 0xab, 0xe4, 0xed, 0xe4, 0x6c, 0xd4, 0x0a, 0xc4, 0x0a, 0xc4, 0xe9, 0xc3, 0xe9, 0xc3, 0xe9, 0xcb, 0xea, 0xc3, 0x0b, 0xc4, 0x2c, 0xc4, 0x8c, 0xd4, 0x0c, 0xed, 0x09, 0xd4, 0x24, 0x82, 0x21, 0x61, 0x40, 0x61, 0x61, 0x61, 0x2b, 0x73, 0x30, 0x84, 0xb3, 0x94, 0x34, 0xa5, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd7, 0xb5, 0x2a, 0x73, 0x22, 0x51, 0xe0, 0x48, 0xe0, 0x48, 0x82, 0x61, 0xe6, 0xa2, 0x6b, 0xd4, 0xec, 0xec, 0xed, 0xe4, 0xcd, 0xdc, 0xad, 0xd4, 0xcd, 0xd4, 0xed, 0xdc, 0xed, 0xe4, 0xac, 0xdc, 0xe9, 0xc3, 0xa4, 0x92, 0x62, 0x69, 0x20, 0x59, 0x20, 0x61, 0x82, 0x61, 0xeb, 0x72, 0x10, 0x84, 0x72, 0x8c, 0x75, 0xad, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0xbe, 0xae, 0x83, 0x05, 0x62, 0xe0, 0x48, 0xe0, 0x48, 0xc0, 0x48, 0x21, 0x59, 0x03, 0x7a, 0xa5, 0x92, 0x27, 0xab, 0x88, 0xb3, 0x68, 0xb3, 0x27, 0xab, 0x85, 0x92, 0xe3, 0x71, 0x41, 0x61, 0x20, 0x51, 0x20, 0x59, 0x40, 0x59, 0x05, 0x62, 0x8d, 0x7b, 0x10, 0x84, 0x71, 0x8c, 0xb3, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9b, 0xce, 0xb2, 0x94, 0x0b, 0x73, 0x83, 0x59, 0xe0, 0x48, 0xc0, 0x48, 0xc0, 0x48, 0xe0, 0x48, 0xe0, 0x48, 0xe0, 0x48, 0xe0, 0x48, 0xe0, 0x48, 0xe0, 0x48, 0x20, 0x51, 0x00, 0x51, 0x20, 0x59, 0xc4, 0x61, 0xea, 0x72, 0xef, 0x7b, 0x51, 0x8c, 0xb2, 0x94, 0x75, 0xad, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xad, 0x92, 0x94, 0x6c, 0x7b, 0x06, 0x62, 0x83, 0x51, 0x01, 0x51, 0xc0, 0x48, 0xe0, 0x48, 0xe0, 0x48, 0xe0, 0x48, 0x42, 0x51, 0x83, 0x59, 0x26, 0x62, 0x4b, 0x73, 0xcf, 0x7b, 0x30, 0x84, 0x91, 0x94, 0xf3, 0xa4, 0x75, 0xad, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0xad, 0x55, 0xad, 0xf3, 0x9c, 0x10, 0x8c, 0x6d, 0x7b, 0x0b, 0x73, 0x0b, 0x6b, 0x0b, 0x73, 0x2b, 0x73, 0x6d, 0x7b, 0xcf, 0x7b, 0x31, 0x84, 0x71, 0x8c, 0xb3, 0x94, 0xf3, 0x9c, 0x76, 0xb5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0xce, 0x56, 0x9d, 0x14, 0x9d, 0xd3, 0x94, 0x72, 0x94, 0x72, 0x8c, 0x71, 0x8c, 0x71, 0x8c, 0x92, 0x94, 0xd3, 0x9c, 0x34, 0xad, 0x59, 0xae, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  /*alpha channel*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x09, 0x46, 0x47, 0x95, 0x95, 0x29, 0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x58, 0xda, 0xeb, 0xf9, 0xf9, 0xff, 0xff, 0xf2, 0xeb, 0xeb, 0x82, 0x57, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x5b, 0xc9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc9, 0x5b, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x84, 0x06, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x85, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x16, 0xed, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xca, 0x1b, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xd2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8c, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x5b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x59, 0x00, 0x00, 
  0x00, 0x00, 0x0d, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x00, 0x00, 
  0x00, 0x00, 0x58, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x28, 0x00, 
  0x00, 0x00, 0x51, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x85, 0x00, 
  0x00, 0x06, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x5c, 
  0x00, 0x09, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec, 0x0e, 
  0x00, 0x09, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7d, 
  0x00, 0x09, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x98, 
  0x00, 0x09, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x95, 
  0x00, 0x09, 0xec, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x95, 
  0x00, 0x09, 0xe9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x95, 
  0x00, 0x01, 0x68, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x97, 
  0x00, 0x00, 0x4b, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x85, 
  0x00, 0x00, 0x01, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0a, 
  0x00, 0x00, 0x00, 0x3d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc8, 0x06, 
  0x00, 0x00, 0x00, 0x09, 0xb5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x4c, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x49, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc5, 0x04, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x46, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0xcd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb5, 0x0b, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0xd1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb2, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xcc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb1, 0x0c, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x87, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec, 0xa1, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa6, 0xeb, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xeb, 0x8d, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x17, 0x93, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x53, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  
};

const lv_img_dsc_t rp = {
  .header.cf = LV_IMG_CF_RGB565A8,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 35,
  .header.h = 35,
  .data_size = 3675,
  .data = rp_map,
};