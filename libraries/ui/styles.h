#ifndef EEZ_LVGL_UI_STYLES_H
#define EEZ_LVGL_UI_STYLES_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Style: Style_Light_Screen
lv_style_t *get_style_style_light_screen_MAIN_DEFAULT();
void add_style_style_light_screen(lv_obj_t *obj);
void remove_style_style_light_screen(lv_obj_t *obj);

// Style: Style_Dark_Screen
lv_style_t *get_style_style_dark_screen_MAIN_DEFAULT();
void add_style_style_dark_screen(lv_obj_t *obj);
void remove_style_style_dark_screen(lv_obj_t *obj);

// Style: Style_Dark_Label_Error
lv_style_t *get_style_style_dark_label_error_MAIN_DEFAULT();
void add_style_style_dark_label_error(lv_obj_t *obj);
void remove_style_style_dark_label_error(lv_obj_t *obj);

// Style: Style_Light_Label_Header
lv_style_t *get_style_style_light_label_header_MAIN_DEFAULT();
void add_style_style_light_label_header(lv_obj_t *obj);
void remove_style_style_light_label_header(lv_obj_t *obj);

// Style: Style_Light_Label_Footer
lv_style_t *get_style_style_light_label_footer_MAIN_DEFAULT();
void add_style_style_light_label_footer(lv_obj_t *obj);
void remove_style_style_light_label_footer(lv_obj_t *obj);

// Style: Style_ImageButton_Hidden
void add_style_style_image_button_hidden(lv_obj_t *obj);
void remove_style_style_image_button_hidden(lv_obj_t *obj);

// Style: Style_Message_Box
void add_style_style_message_box(lv_obj_t *obj);
void remove_style_style_message_box(lv_obj_t *obj);



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_STYLES_H*/