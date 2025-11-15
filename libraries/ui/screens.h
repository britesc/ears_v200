#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *screen_start;
    lv_obj_t *screen_boot_animation;
    lv_obj_t *screen_initial_setup;
    lv_obj_t *screen_system_error;
    lv_obj_t *screen_buttons_template;
    lv_obj_t *boot_animation_logo;
    lv_obj_t *button_do_reboot;
    lv_obj_t *button_message_box_confirm_erase_yes;
    lv_obj_t *button_message_box_confirm_erase_no;
    lv_obj_t *image_button_return;
    lv_obj_t *image_ear_25;
    lv_obj_t *image_button_return_1;
    lv_obj_t *label_page_header_1;
    lv_obj_t *label_footer_1;
    lv_obj_t *container_template_buttons_1;
    lv_obj_t *button_do_zap__number;
    lv_obj_t *button_do_password;
    lv_obj_t *button_do_info;
    lv_obj_t *template_button_19;
    lv_obj_t *template_button_20;
    lv_obj_t *template_button_21;
    lv_obj_t *template_button_22;
    lv_obj_t *template_button_23;
    lv_obj_t *template_button_24;
    lv_obj_t *template_button_25;
    lv_obj_t *button_do__erase;
    lv_obj_t *template_button_27;
    lv_obj_t *template_button_28;
    lv_obj_t *template_button_29;
    lv_obj_t *obj0;
    lv_obj_t *label_message_box_confirm_erase;
    lv_obj_t *button_message_box_confirm_erase_text_yes;
    lv_obj_t *button_message_box_confirm_erase_text_no;
    lv_obj_t *label_dark_error_system;
    lv_obj_t *label_dark_error_error;
    lv_obj_t *label_dark_error_code;
    lv_obj_t *image_ear_24_colured;
    lv_obj_t *label_page_header;
    lv_obj_t *label_footer;
    lv_obj_t *container_template_buttons;
    lv_obj_t *template_button_1;
    lv_obj_t *template_button_2;
    lv_obj_t *template_button_3;
    lv_obj_t *template_button_4;
    lv_obj_t *template_button_5;
    lv_obj_t *template_button_6;
    lv_obj_t *template_button_7;
    lv_obj_t *template_button_8;
    lv_obj_t *template_button_9;
    lv_obj_t *template_button_10;
    lv_obj_t *template_button_11;
    lv_obj_t *template_button_12;
    lv_obj_t *template_button_13;
    lv_obj_t *template_button_14;
    lv_obj_t *template_button_15;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_SCREEN_START = 1,
    SCREEN_ID_SCREEN_BOOT_ANIMATION = 2,
    SCREEN_ID_SCREEN_INITIAL_SETUP = 3,
    SCREEN_ID_SCREEN_SYSTEM_ERROR = 4,
    SCREEN_ID_SCREEN_BUTTONS_TEMPLATE = 5,
};

void create_screen_screen_start();
void tick_screen_screen_start();

void create_screen_screen_boot_animation();
void tick_screen_screen_boot_animation();

void create_screen_screen_initial_setup();
void tick_screen_screen_initial_setup();

void create_screen_screen_system_error();
void tick_screen_screen_system_error();

void create_screen_screen_buttons_template();
void tick_screen_screen_buttons_template();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/