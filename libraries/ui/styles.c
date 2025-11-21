#include "styles.h"
#include "images.h"
#include "fonts.h"

#include "ui.h"
#include "screens.h"

//
// Style: Style_Light_Screen
//

void init_style_style_light_screen_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_color(style, lv_color_hex(0xff000000));
    lv_style_set_text_color(style, lv_color_hex(0xfffafafa));
};

lv_style_t *get_style_style_light_screen_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_style_light_screen_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_style_light_screen(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_style_light_screen_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_style_light_screen(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_style_light_screen_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Style_Dark_Screen
//

void init_style_style_dark_screen_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_color(style, lv_color_hex(0xff000000));
    lv_style_set_text_color(style, lv_color_hex(0xffa00303));
};

lv_style_t *get_style_style_dark_screen_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_style_dark_screen_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_style_dark_screen(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_style_dark_screen_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_style_dark_screen(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_style_dark_screen_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Style_Dark_Label_Error
//

void init_style_style_dark_label_error_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_text_font(style, &lv_font_montserrat_34);
};

lv_style_t *get_style_style_dark_label_error_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_style_dark_label_error_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_style_dark_label_error(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_style_dark_label_error_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_style_dark_label_error(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_style_dark_label_error_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Style_Light_Label_Header
//

void init_style_style_light_label_header_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_color(style, lv_color_hex(0xfffafafa));
    lv_style_set_text_color(style, lv_color_hex(0xfffafafa));
    lv_style_set_text_font(style, &lv_font_montserrat_16);
};

lv_style_t *get_style_style_light_label_header_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_style_light_label_header_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_style_light_label_header(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_style_light_label_header_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_style_light_label_header(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_style_light_label_header_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Style_Light_Label_Footer
//

void init_style_style_light_label_footer_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_text_color(style, lv_color_hex(0xfffafafa));
    lv_style_set_text_font(style, &lv_font_montserrat_8);
};

lv_style_t *get_style_style_light_label_footer_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_style_light_label_footer_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_style_light_label_footer(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_style_light_label_footer_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_style_light_label_footer(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_style_light_label_footer_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Style_ImageButton_Hidden
//

void add_style_style_image_button_hidden(lv_obj_t *obj) {
    (void)obj;
};

void remove_style_style_image_button_hidden(lv_obj_t *obj) {
    (void)obj;
};

//
// Style: Style_Light_Message_Box
//

void add_style_style_light_message_box(lv_obj_t *obj) {
    (void)obj;
};

void remove_style_style_light_message_box(lv_obj_t *obj) {
    (void)obj;
};

//
// Style: Style_Light_Label_Normal
//

void init_style_style_light_label_normal_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_text_color(style, lv_color_hex(0xfffefefe));
    lv_style_set_text_font(style, &lv_font_montserrat_14);
};

lv_style_t *get_style_style_light_label_normal_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_style_light_label_normal_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_style_light_label_normal(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_style_light_label_normal_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_style_light_label_normal(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_style_light_label_normal_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Style_Light_Text_Area
//

void init_style_style_light_text_area_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_text_letter_space(style, 1);
    lv_style_set_bg_color(style, lv_color_hex(0xff282b30));
    lv_style_set_border_width(style, 1);
    lv_style_set_text_color(style, lv_color_hex(0xfffafafa));
};

lv_style_t *get_style_style_light_text_area_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_style_light_text_area_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_style_light_text_area(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_style_light_text_area_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_style_light_text_area(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_style_light_text_area_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Style_Light_Keyboard
//

void init_style_style_light_keyboard_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_text_color(style, lv_color_hex(0xffd91010));
    lv_style_set_bg_color(style, lv_color_hex(0xff15171a));
};

lv_style_t *get_style_style_light_keyboard_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_style_light_keyboard_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_style_light_keyboard(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_style_light_keyboard_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_style_light_keyboard(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_style_light_keyboard_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
//
//

void add_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*AddStyleFunc)(lv_obj_t *obj);
    static const AddStyleFunc add_style_funcs[] = {
        add_style_style_light_screen,
        add_style_style_dark_screen,
        add_style_style_dark_label_error,
        add_style_style_light_label_header,
        add_style_style_light_label_footer,
        add_style_style_image_button_hidden,
        add_style_style_light_message_box,
        add_style_style_light_label_normal,
        add_style_style_light_text_area,
        add_style_style_light_keyboard,
    };
    add_style_funcs[styleIndex](obj);
}

void remove_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*RemoveStyleFunc)(lv_obj_t *obj);
    static const RemoveStyleFunc remove_style_funcs[] = {
        remove_style_style_light_screen,
        remove_style_style_dark_screen,
        remove_style_style_dark_label_error,
        remove_style_style_light_label_header,
        remove_style_style_light_label_footer,
        remove_style_style_image_button_hidden,
        remove_style_style_light_message_box,
        remove_style_style_light_label_normal,
        remove_style_style_light_text_area,
        remove_style_style_light_keyboard,
    };
    remove_style_funcs[styleIndex](obj);
}

