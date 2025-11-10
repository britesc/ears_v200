#ifndef EEZ_LVGL_UI_IMAGES_H
#define EEZ_LVGL_UI_IMAGES_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern const lv_img_dsc_t img_boot_ears_01;
extern const lv_img_dsc_t img_boot_ears_02;
extern const lv_img_dsc_t img_boot_ears_03;
extern const lv_img_dsc_t img_boot_ears_04;
extern const lv_img_dsc_t img_boot_ears_05;
extern const lv_img_dsc_t img_boot_ears_06;
extern const lv_img_dsc_t img_boot_ears_07;
extern const lv_img_dsc_t img_boot_ears_08;
extern const lv_img_dsc_t img_boot_ears_09;
extern const lv_img_dsc_t img_boot_ears_10;
extern const lv_img_dsc_t img_boot_ears_11;
extern const lv_img_dsc_t img_boot_ears_12;
extern const lv_img_dsc_t img_boot_ears_13;
extern const lv_img_dsc_t img_ear_24_coloured;
extern const lv_img_dsc_t img_return_24_coloured;
extern const lv_img_dsc_t img_button_blank;
extern const lv_img_dsc_t img_image_button_coloured_zap;
extern const lv_img_dsc_t img_image_button_coloured_key;
extern const lv_img_dsc_t img_image_button_coloured_info;
extern const lv_img_dsc_t img_image_button_coloured_exit;

#ifndef EXT_IMG_DESC_T
#define EXT_IMG_DESC_T
typedef struct _ext_img_desc_t {
    const char *name;
    const lv_img_dsc_t *img_dsc;
} ext_img_desc_t;
#endif

extern const ext_img_desc_t images[20];


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_IMAGES_H*/