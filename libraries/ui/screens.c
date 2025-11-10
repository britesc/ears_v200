#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

#include <string.h>

objects_t objects;
lv_obj_t *tick_value_change_obj;

static void event_handler_cb_screen_start_screen_start(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_DRAW_MAIN_END) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 0, e);
    }
}

static void event_handler_cb_screen_boot_animation_boot_animation_logo(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_DRAW_MAIN) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 0, 0, e);
    }
}

static void event_handler_cb_screen_menu_1_template_button_30(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 20, 0, e);
    }
}

static void event_handler_cb_screen_buttons_template_image_button_return(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 2, 0, e);
    }
}

void create_screen_screen_start() {
    void *flowState = getFlowState(0, 0);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen_start = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_add_event_cb(obj, event_handler_cb_screen_start_screen_start, LV_EVENT_ALL, flowState);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_SNAPPABLE|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER);
    add_style_style_dark_screen(obj);
    
    tick_screen_screen_start();
}

void tick_screen_screen_start() {
    void *flowState = getFlowState(0, 0);
    (void)flowState;
}

void create_screen_screen_boot_animation() {
    void *flowState = getFlowState(0, 1);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen_boot_animation = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    add_style_style_light_screen(obj);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Boot_Animation_Logo
            lv_obj_t *obj = lv_animimg_create(parent_obj);
            objects.boot_animation_logo = obj;
            lv_obj_set_pos(obj, 130, 80);
            lv_obj_set_size(obj, 60, 80);
            static const lv_image_dsc_t *images[13] = {
                &img_boot_ears_01,
                &img_boot_ears_02,
                &img_boot_ears_03,
                &img_boot_ears_04,
                &img_boot_ears_05,
                &img_boot_ears_06,
                &img_boot_ears_07,
                &img_boot_ears_08,
                &img_boot_ears_09,
                &img_boot_ears_10,
                &img_boot_ears_11,
                &img_boot_ears_12,
                &img_boot_ears_13,
            };
            lv_animimg_set_src(obj, (const void **)images, 13);
            lv_animimg_set_duration(obj, 2500);
            lv_animimg_set_repeat_count(obj, 1);
            lv_animimg_start(obj);
            lv_obj_add_event_cb(obj, event_handler_cb_screen_boot_animation_boot_animation_logo, LV_EVENT_ALL, flowState);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_ADV_HITTEST|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
        }
    }
    
    tick_screen_screen_boot_animation();
}

void tick_screen_screen_boot_animation() {
    void *flowState = getFlowState(0, 1);
    (void)flowState;
}

void create_screen_screen_menu_1() {
    void *flowState = getFlowState(0, 2);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen_menu_1 = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_SNAPPABLE|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER);
    add_style_style_dark_screen(obj);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Image_Ear_25
            lv_obj_t *obj = lv_image_create(parent_obj);
            objects.image_ear_25 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_image_set_src(obj, &img_ear_24_coloured);
        }
        {
            // ImageButton_Return_1
            lv_obj_t *obj = lv_imagebutton_create(parent_obj);
            objects.image_button_return_1 = obj;
            lv_obj_set_pos(obj, 292, 214);
            lv_obj_set_size(obj, 24, 24);
            lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_return_24_coloured, NULL);
            lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_return_24_coloured, NULL);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
        }
        {
            // Label_Page_Header_1
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_page_header_1 = obj;
            lv_obj_set_pos(obj, 25, 2);
            lv_obj_set_size(obj, 285, 20);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_DOT);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_light_label_header(obj);
            lv_label_set_text(obj, "Initial Configuration & Setup");
        }
        {
            // Label_Footer_1
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_footer_1 = obj;
            lv_obj_set_pos(obj, 12, 226);
            lv_obj_set_size(obj, 275, LV_SIZE_CONTENT);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_SCROLL_CIRCULAR);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_light_label_footer(obj);
            lv_label_set_text(obj, "It is necessary to Configure & Setup the System. You will not be able to progress further until this has been completed.");
        }
        {
            // Container_Template_Buttons_1
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.container_template_buttons_1 = obj;
            lv_obj_set_pos(obj, 2, 35);
            lv_obj_set_size(obj, 316, 189);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_left(obj, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_row(obj, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_column(obj, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // Template_Button_16
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_16 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_image_button_coloured_zap, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_image_button_coloured_zap, NULL);
                }
                {
                    // Template_Button_17
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_17 = obj;
                    lv_obj_set_pos(obj, 64, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_image_button_coloured_key, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_image_button_coloured_key, NULL);
                }
                {
                    // Template_Button_18
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_18 = obj;
                    lv_obj_set_pos(obj, 128, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_image_button_coloured_info, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_image_button_coloured_info, NULL);
                }
                {
                    // Template_Button_19
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_19 = obj;
                    lv_obj_set_pos(obj, 192, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    add_style_style_image_button_hidden(obj);
                }
                {
                    // Template_Button_20
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_20 = obj;
                    lv_obj_set_pos(obj, 256, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                    add_style_style_image_button_hidden(obj);
                }
                {
                    // Template_Button_21
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_21 = obj;
                    lv_obj_set_pos(obj, 0, 65);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                    add_style_style_image_button_hidden(obj);
                }
                {
                    // Template_Button_22
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_22 = obj;
                    lv_obj_set_pos(obj, 64, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                    add_style_style_image_button_hidden(obj);
                }
                {
                    // Template_Button_23
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_23 = obj;
                    lv_obj_set_pos(obj, 128, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                    add_style_style_image_button_hidden(obj);
                }
                {
                    // Template_Button_24
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_24 = obj;
                    lv_obj_set_pos(obj, 192, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                    add_style_style_image_button_hidden(obj);
                }
                {
                    // Template_Button_25
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_25 = obj;
                    lv_obj_set_pos(obj, 256, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                    add_style_style_image_button_hidden(obj);
                }
                {
                    // Template_Button_26
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_26 = obj;
                    lv_obj_set_pos(obj, 0, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                    add_style_style_image_button_hidden(obj);
                }
                {
                    // Template_Button_27
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_27 = obj;
                    lv_obj_set_pos(obj, 64, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                    add_style_style_image_button_hidden(obj);
                }
                {
                    // Template_Button_28
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_28 = obj;
                    lv_obj_set_pos(obj, 128, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                    add_style_style_image_button_hidden(obj);
                }
                {
                    // Template_Button_29
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_29 = obj;
                    lv_obj_set_pos(obj, 192, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                    add_style_style_image_button_hidden(obj);
                }
                {
                    // Template_Button_30
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_30 = obj;
                    lv_obj_set_pos(obj, 256, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_image_button_coloured_exit, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_image_button_coloured_exit, NULL);
                    lv_obj_add_event_cb(obj, event_handler_cb_screen_menu_1_template_button_30, LV_EVENT_ALL, flowState);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                }
            }
        }
    }
    
    tick_screen_screen_menu_1();
}

void tick_screen_screen_menu_1() {
    void *flowState = getFlowState(0, 2);
    (void)flowState;
}

void create_screen_screen_system_error() {
    void *flowState = getFlowState(0, 3);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen_system_error = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_SNAPPABLE|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER);
    add_style_style_dark_screen(obj);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Label_Dark_Error_System
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_dark_error_system = obj;
            lv_obj_set_pos(obj, 90, 37);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_dark_label_error(obj);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffa00303), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "SYSTEM");
        }
        {
            // Label_Dark_Error_Error
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_dark_error_error = obj;
            lv_obj_set_pos(obj, 97, 99);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_dark_label_error(obj);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffa00303), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "ERROR");
        }
        {
            // Label_Dark_Error_Code
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_dark_error_code = obj;
            lv_obj_set_pos(obj, 114, 161);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_CLIP);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_dark_label_error(obj);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffa00303), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "0000");
        }
    }
    
    tick_screen_screen_system_error();
}

void tick_screen_screen_system_error() {
    void *flowState = getFlowState(0, 3);
    (void)flowState;
}

void create_screen_screen_buttons_template() {
    void *flowState = getFlowState(0, 4);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen_buttons_template = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_SNAPPABLE|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER);
    add_style_style_dark_screen(obj);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Image_Ear_24_Colured
            lv_obj_t *obj = lv_image_create(parent_obj);
            objects.image_ear_24_colured = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_image_set_src(obj, &img_ear_24_coloured);
        }
        {
            // ImageButton_Return
            lv_obj_t *obj = lv_imagebutton_create(parent_obj);
            objects.image_button_return = obj;
            lv_obj_set_pos(obj, 292, 214);
            lv_obj_set_size(obj, 24, 24);
            lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_return_24_coloured, NULL);
            lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_return_24_coloured, NULL);
            lv_obj_add_event_cb(obj, event_handler_cb_screen_buttons_template_image_button_return, LV_EVENT_ALL, flowState);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
        }
        {
            // Label_Page_Header
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_page_header = obj;
            lv_obj_set_pos(obj, 25, 2);
            lv_obj_set_size(obj, 285, 20);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_DOT);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_light_label_header(obj);
            lv_label_set_text(obj, "Page Header Goes Here");
        }
        {
            // Label_Footer
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_footer = obj;
            lv_obj_set_pos(obj, 12, 226);
            lv_obj_set_size(obj, 275, LV_SIZE_CONTENT);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_SCROLL_CIRCULAR);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_light_label_footer(obj);
            lv_label_set_text(obj, "This is a very long line of text that should scroll around and around and keep on going for ever.                                         ");
        }
        {
            // Container_Template_Buttons
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.container_template_buttons = obj;
            lv_obj_set_pos(obj, 2, 35);
            lv_obj_set_size(obj, 316, 189);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_left(obj, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_row(obj, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_column(obj, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // Template_Button_1
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_1 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_2
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_2 = obj;
                    lv_obj_set_pos(obj, 64, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_3
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_3 = obj;
                    lv_obj_set_pos(obj, 128, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_4
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_4 = obj;
                    lv_obj_set_pos(obj, 192, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_5
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_5 = obj;
                    lv_obj_set_pos(obj, 256, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_6
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_6 = obj;
                    lv_obj_set_pos(obj, 0, 65);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_7
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_7 = obj;
                    lv_obj_set_pos(obj, 64, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_8
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_8 = obj;
                    lv_obj_set_pos(obj, 128, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_9
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_9 = obj;
                    lv_obj_set_pos(obj, 192, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_10
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_10 = obj;
                    lv_obj_set_pos(obj, 256, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_11
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_11 = obj;
                    lv_obj_set_pos(obj, 0, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_12
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_12 = obj;
                    lv_obj_set_pos(obj, 64, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_13
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_13 = obj;
                    lv_obj_set_pos(obj, 128, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_14
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_14 = obj;
                    lv_obj_set_pos(obj, 192, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_15
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_15 = obj;
                    lv_obj_set_pos(obj, 256, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
            }
        }
    }
    
    tick_screen_screen_buttons_template();
}

void tick_screen_screen_buttons_template() {
    void *flowState = getFlowState(0, 4);
    (void)flowState;
}


extern void add_style(lv_obj_t *obj, int32_t styleIndex);
extern void remove_style(lv_obj_t *obj, int32_t styleIndex);

static const char *screen_names[] = { "Screen_Start", "Screen_Boot_Animation", "Screen_Menu_1", "Screen_System_Error", "Screen_Buttons_Template" };
static const char *object_names[] = { "screen_start", "screen_boot_animation", "screen_menu_1", "screen_system_error", "screen_buttons_template", "boot_animation_logo", "template_button_30", "image_button_return", "image_ear_25", "image_button_return_1", "label_page_header_1", "label_footer_1", "container_template_buttons_1", "template_button_16", "template_button_17", "template_button_18", "template_button_19", "template_button_20", "template_button_21", "template_button_22", "template_button_23", "template_button_24", "template_button_25", "template_button_26", "template_button_27", "template_button_28", "template_button_29", "label_dark_error_system", "label_dark_error_error", "label_dark_error_code", "image_ear_24_colured", "label_page_header", "label_footer", "container_template_buttons", "template_button_1", "template_button_2", "template_button_3", "template_button_4", "template_button_5", "template_button_6", "template_button_7", "template_button_8", "template_button_9", "template_button_10", "template_button_11", "template_button_12", "template_button_13", "template_button_14", "template_button_15" };
static const char *style_names[] = { "Style_Light_Screen", "Style_Dark_Screen", "Style_Dark_Label_Error", "Style_Light_Label_Header", "Style_Light_Label_Footer", "Style_ImageButton_Hidden" };


typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_screen_start,
    tick_screen_screen_boot_animation,
    tick_screen_screen_menu_1,
    tick_screen_screen_system_error,
    tick_screen_screen_buttons_template,
};
void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
void tick_screen_by_id(enum ScreensEnum screenId) {
    tick_screen_funcs[screenId - 1]();
}

void create_screens() {
    eez_flow_init_styles(add_style, remove_style);
    
    eez_flow_init_screen_names(screen_names, sizeof(screen_names) / sizeof(const char *));
    eez_flow_init_object_names(object_names, sizeof(object_names) / sizeof(const char *));
    eez_flow_init_style_names(style_names, sizeof(style_names) / sizeof(const char *));
    
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_screen_start();
    create_screen_screen_boot_animation();
    create_screen_screen_menu_1();
    create_screen_screen_system_error();
    create_screen_screen_buttons_template();
}
