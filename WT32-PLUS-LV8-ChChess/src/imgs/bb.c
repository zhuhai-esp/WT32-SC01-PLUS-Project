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

#ifndef LV_ATTRIBUTE_IMG_BB
#define LV_ATTRIBUTE_IMG_BB
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BB uint8_t bb_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0xce, 0x84, 0xfc, 0x76, 0xe6, 0x55, 0xe6, 0xf2, 0xe5, 0x34, 0xe6, 0x84, 0xcb, 0x8b, 0xac, 0xff, 0xaf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0xf5, 0x0f, 0xf6, 0xac, 0xf5, 0x26, 0xfd, 0x46, 0xfd, 0x66, 0xfd, 0x26, 0xf5, 0xc5, 0xec, 0x63, 0xe4, 0x45, 0xd4, 0xaa, 0xcc, 0xa4, 0xb3, 0xf5, 0xc5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0xfe, 0x0a, 0xfe, 0x09, 0xfe, 0xe8, 0xfd, 0xe8, 0xfd, 0xc8, 0xfd, 0xc7, 0xfd, 0x87, 0xfd, 0x66, 0xfd, 0x24, 0xfd, 0xe3, 0xf4, 0xa3, 0xec, 0x23, 0xdc, 0x04, 0xcc, 0xe5, 0xbb, 0x2a, 0xac, 0xf0, 0xb4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd9, 0xee, 0x0c, 0xfe, 0x0a, 0xfe, 0x4a, 0xfe, 0x6a, 0xfe, 0x6b, 0xfe, 0x8d, 0xfe, 0x8e, 0xfe, 0x8e, 0xfe, 0x6e, 0xfe, 0x2e, 0xfe, 0x0d, 0xfe, 0xca, 0xfd, 0x46, 0xfd, 0xc4, 0xec, 0x43, 0xdc, 0xc2, 0xc3, 0x62, 0xb3, 0x86, 0x9b, 0xe6, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xee, 0x0d, 0xf6, 0x2a, 0xfe, 0x2b, 0xfe, 0x6e, 0xfe, 0xb1, 0xfe, 0xb2, 0xfe, 0x50, 0xfe, 0x0f, 0xee, 0xee, 0xed, 0xee, 0xed, 0xcd, 0xed, 0xee, 0xed, 0xad, 0xed, 0xcc, 0xf5, 0xca, 0xfd, 0x08, 0xed, 0x24, 0xd4, 0x62, 0xbb, 0x01, 0xa3, 0xa1, 0x92, 0xeb, 0x9b, 0x17, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0xee, 0x0b, 0xf6, 0x4b, 0xfe, 0x8e, 0xfe, 0xf3, 0xfe, 0xd3, 0xfe, 0x50, 0xfe, 0xef, 0xf5, 0xef, 0xed, 0x51, 0xf6, 0x72, 0xf6, 0x50, 0xf6, 0x4f, 0xf6, 0x2f, 0xf6, 0xcd, 0xed, 0x6c, 0xe5, 0x6b, 0xe5, 0xcc, 0xf5, 0xec, 0xfd, 0xc6, 0xdc, 0x82, 0xb3, 0x01, 0xa3, 0x61, 0x82, 0x8a, 0x8b, 0x17, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x95, 0xee, 0x4c, 0xfe, 0x4c, 0xfe, 0xb0, 0xfe, 0x35, 0xff, 0xd3, 0xfe, 0xee, 0xf5, 0x0e, 0xf6, 0xb3, 0xfe, 0xd3, 0xfe, 0x91, 0xfe, 0x90, 0xfe, 0x4e, 0xfe, 0x2d, 0xfe, 0x4e, 0xfe, 0x4e, 0xfe, 0x2d, 0xfe, 0xcb, 0xf5, 0x29, 0xe5, 0x4b, 0xe5, 0xec, 0xfd, 0x48, 0xed, 0x63, 0xb3, 0xa1, 0x92, 0x01, 0x72, 0xe9, 0x7a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa9, 0xfd, 0x0a, 0xfe, 0x6f, 0xfe, 0x35, 0xff, 0x71, 0xfe, 0xcd, 0xed, 0x51, 0xf6, 0xb2, 0xfe, 0x70, 0xfe, 0x2f, 0xfe, 0x70, 0xfe, 0x2e, 0xfe, 0x4e, 0xfe, 0xac, 0xed, 0xac, 0xed, 0x2d, 0xfe, 0x0c, 0xfe, 0x0c, 0xfe, 0x0c, 0xfe, 0x8a, 0xed, 0xe9, 0xdc, 0xcb, 0xf5, 0x69, 0xed, 0x01, 0xa3, 0x20, 0x7a, 0x80, 0x59, 0x85, 0x6a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xee, 0xc9, 0xfd, 0x6e, 0xfe, 0xf4, 0xfe, 0xb3, 0xfe, 0x0f, 0xf6, 0xb3, 0xfe, 0xd2, 0xfe, 0x90, 0xfe, 0x6e, 0xfe, 0x6e, 0xfe, 0x0d, 0xf6, 0xcb, 0xcc, 0x48, 0x83, 0xc5, 0x41, 0x05, 0x52, 0x69, 0xbc, 0x8a, 0xbc, 0xca, 0xcc, 0x69, 0xb4, 0x8b, 0xed, 0x8a, 0xf5, 0xc9, 0xdc, 0xcb, 0xf5, 0xe8, 0xdc, 0x81, 0x82, 0xe0, 0x71, 0xe4, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xda, 0xde, 0xaa, 0xfd, 0x0b, 0xfe, 0xd2, 0xfe, 0xd3, 0xfe, 0xcd, 0xf5, 0xcd, 0xbc, 0xd0, 0xe5, 0xcd, 0xc4, 0x2b, 0xa4, 0x89, 0x93, 0x48, 0x8b, 0x05, 0x52, 0x67, 0x5a, 0x0a, 0x6b, 0xab, 0x8b, 0x0c, 0x9c, 0xa8, 0x62, 0xe3, 0x18, 0x03, 0x21, 0x27, 0x52, 0x6e, 0xd5, 0xeb, 0xfd, 0x49, 0xed, 0xa8, 0xd4, 0xab, 0xf5, 0xc4, 0xb3, 0xe0, 0x71, 0x61, 0x59, 0xe9, 0x72, 0x7f, 0xdf, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x29, 0xed, 0x68, 0xfd, 0x0b, 0xfe, 0x91, 0xfe, 0xce, 0xf5, 0xcd, 0xed, 0xa7, 0x6a, 0x84, 0x39, 0xe3, 0x20, 0xa2, 0x10, 0xc3, 0x10, 0x88, 0x5a, 0x0f, 0xc5, 0xd0, 0xe5, 0xce, 0xed, 0xec, 0xcc, 0x89, 0x8b, 0xe6, 0x41, 0x88, 0x62, 0xae, 0xb4, 0xcf, 0xe5, 0xcd, 0xf5, 0x69, 0xf5, 0x4a, 0xed, 0x87, 0xdc, 0xc8, 0xdc, 0x08, 0xe5, 0x41, 0x7a, 0x60, 0x59, 0x46, 0x62, 0x4f, 0x94, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x7f, 0x9e, 0x28, 0xed, 0x66, 0xfd, 0x4e, 0xfe, 0x50, 0xfe, 0xac, 0xe5, 0x4f, 0xfe, 0xc7, 0x72, 0xa3, 0x10, 0x44, 0x29, 0x27, 0x4a, 0x03, 0x21, 0x68, 0x5a, 0xa7, 0x6a, 0xe5, 0x49, 0x44, 0x29, 0xc3, 0x18, 0xc3, 0x18, 0xe3, 0x18, 0x47, 0x52, 0x87, 0x62, 0x86, 0x6a, 0x85, 0x6a, 0xa5, 0x72, 0xc6, 0x72, 0x6a, 0xe5, 0x66, 0xcc, 0x49, 0xf5, 0xa4, 0xb3, 0x80, 0x59, 0x41, 0x51, 0x4b, 0x7b, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xa8, 0xe6, 0xec, 0xa8, 0xfd, 0x4e, 0xfe, 0x2f, 0xf6, 0xcd, 0xed, 0x4e, 0xfe, 0x2c, 0xd5, 0x6c, 0xa4, 0xf1, 0xdd, 0xf0, 0xed, 0xc5, 0x41, 0x04, 0x21, 0x27, 0x4a, 0x2a, 0x73, 0xaa, 0x8b, 0xe6, 0x41, 0xe3, 0x18, 0x4a, 0x73, 0x6d, 0xac, 0xca, 0x8b, 0xeb, 0x93, 0xa5, 0x39, 0xe4, 0x18, 0x2d, 0x9c, 0x0e, 0xfe, 0xa7, 0xdc, 0xc8, 0xdc, 0xa6, 0xd4, 0xc0, 0x61, 0x61, 0x51, 0xe8, 0x7a, 0xd7, 0xad, 0x00, 0x00, 
  0x00, 0x00, 0xd2, 0xdd, 0xe5, 0xf4, 0x87, 0xfd, 0x2e, 0xfe, 0xcd, 0xed, 0xcd, 0xed, 0x0d, 0xfe, 0x0d, 0xfe, 0x2e, 0xfe, 0x4e, 0xfe, 0x29, 0xb4, 0xe3, 0x20, 0xe9, 0x6a, 0xf1, 0xe5, 0x8e, 0xe5, 0x6b, 0xb4, 0xc5, 0x41, 0xc3, 0x18, 0x8a, 0x83, 0x4a, 0xac, 0x49, 0xb4, 0x89, 0x8b, 0xa5, 0x39, 0xce, 0xb4, 0x0f, 0xfe, 0x6a, 0xf5, 0x07, 0xe5, 0x87, 0xd4, 0x08, 0xed, 0x21, 0x72, 0x60, 0x51, 0x85, 0x6a, 0x97, 0xb5, 0xff, 0xff, 
  0x00, 0x00, 0x6f, 0xdd, 0xe5, 0xf4, 0x66, 0xfd, 0x0d, 0xfe, 0xcd, 0xed, 0xcc, 0xf5, 0x2d, 0xfe, 0x0e, 0xfe, 0x2d, 0xfe, 0xaa, 0xc4, 0x43, 0x29, 0xc3, 0x18, 0x24, 0x29, 0xc5, 0x41, 0xe5, 0x41, 0xe3, 0x20, 0x24, 0x29, 0x88, 0x62, 0xc9, 0x6a, 0xc8, 0x62, 0x27, 0x52, 0x06, 0x42, 0x6d, 0xa4, 0x2f, 0xfe, 0x49, 0xf5, 0x49, 0xf5, 0x68, 0xf5, 0x87, 0xd4, 0x69, 0xf5, 0xe3, 0x92, 0x80, 0x61, 0x24, 0x6a, 0x91, 0x94, 0x00, 0x00, 
  0x00, 0x00, 0x47, 0xc4, 0xc4, 0xec, 0x67, 0xfd, 0x4f, 0xfe, 0xcd, 0xed, 0x2e, 0xfe, 0x4e, 0xfe, 0x0e, 0xfe, 0xcd, 0xf5, 0xa7, 0x62, 0xc9, 0x62, 0x4c, 0x9c, 0x8d, 0xa4, 0x0d, 0x9c, 0x06, 0x42, 0xc3, 0x18, 0xa8, 0x62, 0x10, 0xee, 0x2d, 0xfe, 0xed, 0xfd, 0xad, 0xed, 0x4b, 0xac, 0xae, 0xe5, 0xaa, 0xfd, 0x6a, 0xf5, 0x89, 0xf5, 0x69, 0xf5, 0x86, 0xcc, 0x69, 0xed, 0x63, 0xab, 0xc0, 0x69, 0x02, 0x6a, 0x70, 0x94, 0x7a, 0xce, 
  0x00, 0x00, 0xc3, 0xb3, 0x64, 0xdc, 0x06, 0xf5, 0x0e, 0xfe, 0x6c, 0xe5, 0x0e, 0xf6, 0x2f, 0xf6, 0x2e, 0xf6, 0x0e, 0xee, 0x8d, 0xdd, 0xad, 0xb4, 0x09, 0x6b, 0x47, 0x52, 0xe9, 0x72, 0xce, 0xb4, 0x88, 0x5a, 0xc3, 0x18, 0xa6, 0x6a, 0x4b, 0xe5, 0x6a, 0xf5, 0x47, 0x8b, 0xe3, 0x20, 0xc5, 0x41, 0x4b, 0xdd, 0x8a, 0xf5, 0x6a, 0xf5, 0x6a, 0xf5, 0x87, 0xd4, 0x69, 0xed, 0x84, 0xab, 0xa0, 0x69, 0xe1, 0x69, 0x2f, 0x8c, 0x5a, 0xc6, 
  0x00, 0x00, 0x06, 0xb4, 0x24, 0xd4, 0xc5, 0xe4, 0x0e, 0xf6, 0xac, 0xe5, 0xcc, 0xf5, 0x2e, 0xfe, 0x8d, 0xe5, 0x07, 0x7b, 0x64, 0x31, 0x06, 0x4a, 0xec, 0x8b, 0x90, 0xd5, 0x2e, 0xc5, 0xca, 0x9b, 0x28, 0x7b, 0x88, 0x5a, 0xe3, 0x18, 0xe5, 0x49, 0xe7, 0x72, 0xe9, 0x6a, 0x2d, 0x9c, 0xcd, 0xb4, 0xcf, 0xed, 0x6a, 0xf5, 0x8a, 0xed, 0x69, 0xf5, 0x66, 0xcc, 0x69, 0xed, 0x84, 0xab, 0xa0, 0x69, 0x02, 0x72, 0x0f, 0x8c, 0xff, 0xaf, 
  0x00, 0x00, 0xcd, 0xbc, 0xe4, 0xc3, 0x24, 0xd4, 0xab, 0xf5, 0x8c, 0xe5, 0xab, 0xf5, 0x0c, 0xfe, 0x88, 0x93, 0x2a, 0x7b, 0x6d, 0xa4, 0x0e, 0xbd, 0x8a, 0x8b, 0x26, 0x52, 0x09, 0x73, 0x0e, 0xc5, 0xac, 0xbc, 0x06, 0x4a, 0xe3, 0x18, 0x04, 0x21, 0x06, 0x4a, 0x2c, 0xcd, 0x0c, 0xfe, 0xab, 0xf5, 0x49, 0xed, 0x49, 0xed, 0x49, 0xed, 0x28, 0xed, 0x67, 0xcc, 0x29, 0xed, 0x23, 0x9b, 0xe0, 0x69, 0x23, 0x6a, 0x30, 0x8c, 0x59, 0xae, 
  0x00, 0x00, 0xb4, 0xc5, 0xc4, 0xbb, 0xe3, 0xc3, 0x28, 0xed, 0x8c, 0xed, 0x4b, 0xe5, 0xec, 0xfd, 0x0b, 0xdd, 0xaa, 0x8b, 0x26, 0x52, 0x64, 0x31, 0x87, 0x5a, 0xce, 0xac, 0xcd, 0xb4, 0xa7, 0x6a, 0x26, 0x4a, 0xeb, 0x93, 0xe6, 0x41, 0xab, 0x8b, 0xa7, 0x62, 0x24, 0x29, 0x87, 0x9b, 0x48, 0xed, 0x49, 0xf5, 0x49, 0xf5, 0x29, 0xed, 0x07, 0xe5, 0x88, 0xcc, 0x28, 0xe5, 0xe2, 0x92, 0xe0, 0x71, 0x44, 0x72, 0x71, 0x8c, 0x75, 0xad, 
  0x00, 0x00, 0xf1, 0xb4, 0x02, 0x9b, 0x82, 0xb3, 0x66, 0xd4, 0xcd, 0xf5, 0x0a, 0xdd, 0xac, 0xf5, 0x66, 0x5a, 0x85, 0x31, 0x4a, 0x73, 0xef, 0xbc, 0xcd, 0xb4, 0x67, 0x5a, 0x85, 0x39, 0xcc, 0x83, 0x10, 0xee, 0xee, 0xf5, 0x85, 0x39, 0x8d, 0xac, 0x4b, 0xe5, 0xe5, 0x49, 0xe3, 0x18, 0x25, 0x5a, 0x87, 0x9b, 0x88, 0xcc, 0x48, 0xf5, 0xa7, 0xdc, 0xe9, 0xdc, 0xa7, 0xdc, 0x81, 0x82, 0xe0, 0x71, 0xe8, 0x7a, 0xb3, 0x94, 0x75, 0xad, 
  0x00, 0x00, 0xfb, 0xbe, 0x0a, 0xac, 0xe1, 0xa2, 0xa3, 0xbb, 0x8b, 0xf5, 0x2a, 0xdd, 0x29, 0xe5, 0x0b, 0xd5, 0x6f, 0xd5, 0x8c, 0xb4, 0x27, 0x52, 0xe3, 0x20, 0xe9, 0x6a, 0xb0, 0xdd, 0x6f, 0xfe, 0xcb, 0xfd, 0x87, 0x93, 0x03, 0x21, 0x4e, 0xcd, 0xab, 0xfd, 0x68, 0xbc, 0x24, 0x29, 0xc3, 0x18, 0xc3, 0x18, 0x44, 0x31, 0x44, 0x6a, 0x46, 0x93, 0x4a, 0xe5, 0xe4, 0xbb, 0x60, 0x7a, 0x00, 0x72, 0x8c, 0x7b, 0xd3, 0x9c, 0x18, 0xc6, 
  0x00, 0x00, 0xff, 0xff, 0xcf, 0xb4, 0xc2, 0x8a, 0x22, 0xa3, 0x86, 0xd4, 0xab, 0xf5, 0xe9, 0xdc, 0x8a, 0xf5, 0xe6, 0x7a, 0xc3, 0x18, 0x85, 0x31, 0x2d, 0x9c, 0x51, 0xfe, 0xac, 0xfd, 0x88, 0xcc, 0xe6, 0x7a, 0xc3, 0x18, 0x88, 0x5a, 0x0f, 0xee, 0x8a, 0xed, 0x69, 0xf5, 0x26, 0x8b, 0xe4, 0x18, 0xc3, 0x18, 0xa3, 0x10, 0x24, 0x29, 0x8d, 0xac, 0xcc, 0xfd, 0x02, 0x9b, 0x40, 0x7a, 0x63, 0x72, 0x0f, 0x84, 0xd3, 0x9c, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x62, 0x7a, 0xa1, 0x92, 0x02, 0xa3, 0x49, 0xed, 0x4b, 0xe5, 0xa8, 0xd4, 0xea, 0xd4, 0x8f, 0xd5, 0xcf, 0xe5, 0x0e, 0xf6, 0x4a, 0xe5, 0x67, 0x93, 0x27, 0x52, 0xc6, 0x39, 0x68, 0x52, 0x8f, 0xcd, 0x8b, 0xf5, 0x29, 0xed, 0x49, 0xed, 0x29, 0xe5, 0xa8, 0x9b, 0x47, 0x5a, 0xa8, 0x62, 0x0f, 0xc5, 0x2e, 0xfe, 0xc4, 0xbb, 0x60, 0x7a, 0xe0, 0x71, 0x09, 0x73, 0x72, 0x8c, 0xf4, 0xa4, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x6a, 0x21, 0x72, 0x60, 0x82, 0x83, 0xb3, 0xcb, 0xfd, 0x2a, 0xdd, 0xa8, 0xdc, 0x69, 0xf5, 0x8a, 0xf5, 0x6a, 0xf5, 0x6a, 0xed, 0x4a, 0xe5, 0x6c, 0xdd, 0xad, 0xe5, 0x0e, 0xf6, 0xcb, 0xf5, 0x28, 0xed, 0x29, 0xed, 0x29, 0xed, 0x28, 0xed, 0x48, 0xf5, 0x4a, 0xed, 0x6c, 0xdd, 0xec, 0xf5, 0x85, 0xd4, 0x61, 0x82, 0x00, 0x72, 0x23, 0x72, 0xef, 0x83, 0x93, 0x94, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0xad, 0x86, 0x72, 0xe0, 0x71, 0x60, 0x7a, 0xc4, 0xb3, 0xeb, 0xfd, 0x2a, 0xe5, 0xa8, 0xd4, 0x09, 0xe5, 0x69, 0xf5, 0x8a, 0xed, 0x49, 0xed, 0x89, 0xf5, 0x49, 0xed, 0x49, 0xed, 0x28, 0xed, 0x49, 0xed, 0x29, 0xed, 0x49, 0xed, 0x08, 0xed, 0xa7, 0xd4, 0xa8, 0xcc, 0x49, 0xed, 0xa6, 0xdc, 0x81, 0x82, 0xe0, 0x71, 0xc1, 0x69, 0x4b, 0x73, 0x52, 0x8c, 0x14, 0xa5, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x7a, 0xc3, 0x61, 0xa0, 0x61, 0xe0, 0x69, 0x84, 0xab, 0xab, 0xf5, 0x8b, 0xed, 0xc8, 0xd4, 0xa7, 0xd4, 0x08, 0xe5, 0x49, 0xf5, 0x69, 0xf5, 0x69, 0xed, 0x49, 0xed, 0x29, 0xed, 0x29, 0xed, 0x08, 0xe5, 0xa8, 0xdc, 0x68, 0xc4, 0xc9, 0xd4, 0x8a, 0xf5, 0x86, 0xd4, 0x61, 0x82, 0xc0, 0x69, 0xa0, 0x69, 0xc8, 0x72, 0x30, 0x84, 0x92, 0x94, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x94, 0xc4, 0x59, 0x40, 0x59, 0x80, 0x61, 0x62, 0x82, 0xc8, 0xdc, 0x0c, 0xfe, 0x6a, 0xe5, 0xe9, 0xd4, 0xc8, 0xd4, 0xa8, 0xd4, 0xa7, 0xd4, 0xa8, 0xd4, 0xa8, 0xd4, 0xc9, 0xd4, 0xc9, 0xd4, 0x0a, 0xd5, 0xab, 0xf5, 0x49, 0xed, 0xa4, 0xb3, 0xe1, 0x71, 0xc0, 0x69, 0xc0, 0x69, 0xa5, 0x72, 0xef, 0x83, 0x92, 0x94, 0x13, 0xa5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x94, 0x05, 0x62, 0x20, 0x49, 0x20, 0x49, 0x80, 0x59, 0xc3, 0x8a, 0xa8, 0xd4, 0x8a, 0xed, 0xab, 0xf5, 0xab, 0xed, 0x8b, 0xed, 0x6a, 0xed, 0xab, 0xed, 0xab, 0xf5, 0x8a, 0xf5, 0x28, 0xe5, 0xe5, 0xbb, 0x42, 0x7a, 0xc0, 0x69, 0xc0, 0x69, 0xc1, 0x61, 0xc7, 0x72, 0xef, 0x7b, 0x51, 0x8c, 0xd3, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x9c, 0xc8, 0x72, 0x41, 0x49, 0x00, 0x49, 0x00, 0x41, 0x40, 0x51, 0x02, 0x6a, 0x03, 0x93, 0xc5, 0xb3, 0x46, 0xc4, 0x47, 0xbc, 0x06, 0xbc, 0x84, 0xab, 0xc2, 0x92, 0x01, 0x72, 0xa0, 0x61, 0xa0, 0x61, 0xa0, 0x61, 0x02, 0x6a, 0x2a, 0x73, 0xef, 0x83, 0x51, 0x8c, 0xb2, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xad, 0xce, 0x83, 0x67, 0x62, 0x61, 0x49, 0x20, 0x49, 0x00, 0x49, 0x00, 0x49, 0x20, 0x49, 0x40, 0x51, 0x60, 0x51, 0x80, 0x51, 0x60, 0x51, 0x60, 0x51, 0x80, 0x61, 0xa0, 0x61, 0xe2, 0x61, 0xa8, 0x6a, 0xae, 0x7b, 0x10, 0x84, 0x92, 0x94, 0xd2, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0xbe, 0xf3, 0x9c, 0xce, 0x83, 0x87, 0x6a, 0xe4, 0x59, 0x82, 0x51, 0x20, 0x51, 0x40, 0x51, 0x40, 0x51, 0x60, 0x59, 0xa1, 0x59, 0xe3, 0x61, 0x25, 0x62, 0x09, 0x73, 0xae, 0x7b, 0x10, 0x84, 0x71, 0x8c, 0xb3, 0x9c, 0x35, 0xa5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xad, 0x34, 0xa5, 0x71, 0x8c, 0xce, 0x83, 0x4b, 0x73, 0x2b, 0x73, 0x2b, 0x73, 0x0b, 0x73, 0x6c, 0x7b, 0xce, 0x7b, 0x10, 0x84, 0x51, 0x8c, 0x92, 0x94, 0xd3, 0x9c, 0x14, 0xa5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0xce, 0x79, 0xad, 0x14, 0xa5, 0xf4, 0x9c, 0x72, 0x8c, 0x72, 0x8c, 0x72, 0x8c, 0x71, 0x8c, 0x72, 0x94, 0xb2, 0x94, 0x14, 0xa5, 0xb6, 0xb5, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  /*alpha channel*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x09, 0x48, 0x95, 0x95, 0x60, 0x09, 0x09, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa6, 0xeb, 0xeb, 0xf9, 0xff, 0xff, 0xff, 0xeb, 0xeb, 0xbd, 0x57, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0xb3, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x98, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xc2, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd1, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x35, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xa3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x59, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0xdc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xa6, 0x0d, 0x00, 0x00, 
  0x00, 0x00, 0x54, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1e, 0x00, 0x00, 
  0x00, 0x05, 0xa5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x72, 0x00, 0x00, 
  0x00, 0x03, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd7, 0x15, 0x00, 
  0x00, 0x6a, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xab, 0x05, 
  0x00, 0x9b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa1, 0x00, 
  0x00, 0x95, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x30, 
  0x00, 0x95, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x43, 
  0x00, 0x95, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0x03, 
  0x00, 0x96, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0x09, 
  0x00, 0x93, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0x09, 
  0x00, 0x17, 0xed, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0x09, 
  0x00, 0x07, 0xf2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xda, 0x08, 
  0x00, 0x05, 0xa6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5b, 0x00, 
  0x00, 0x00, 0x07, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x41, 0x00, 
  0x00, 0x00, 0x00, 0x5b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xd2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x82, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x16, 0xed, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa3, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x85, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0x35, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0x3c, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xb3, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0xeb, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xc7, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x09, 0x6a, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x85, 0x0a, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  
};

const lv_img_dsc_t bb = {
  .header.cf = LV_IMG_CF_RGB565A8,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 35,
  .header.h = 35,
  .data_size = 3675,
  .data = bb_map,
};