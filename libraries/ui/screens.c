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

static void event_handler_cb_screen_initial_setup_button_do_info(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 8, 0, e);
    }
}

static void event_handler_cb_screen_initial_setup_button_do__erase(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 16, 0, e);
    }
}

static void event_handler_cb_screen_initial_setup_button_do_reboot(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 20, 0, e);
    }
}

static void event_handler_cb_screen_initial_setup_button_message_box_confirm_erase_yes(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 24, 0, e);
    }
}

static void event_handler_cb_screen_initial_setup_button_message_box_confirm_erase_no(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 26, 0, e);
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

static void event_handler_cb_screen_info_1_image_button_return_2(lv_event_t *e) {
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
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_SNAPPABLE|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER);
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

void create_screen_screen_initial_setup() {
    void *flowState = getFlowState(0, 2);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen_initial_setup = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_SNAPPABLE|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER);
    lv_obj_add_state(obj, LV_STATE_FOCUSED|LV_STATE_CHECKED);
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
            // Label_Page_Header_Initial_Setup_Screen
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_page_header_initial_setup_screen = obj;
            lv_obj_set_pos(obj, 25, 2);
            lv_obj_set_size(obj, 285, 20);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_DOT);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_light_label_header(obj);
            lv_label_set_text(obj, "Initial Configuration & Setup");
        }
        {
            // Label_Page_Footer_Initial_Setup_Screen
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_page_footer_initial_setup_screen = obj;
            lv_obj_set_pos(obj, 12, 226);
            lv_obj_set_size(obj, 292, LV_SIZE_CONTENT);
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
                    // Button_Do_Zap:_Number
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.button_do_zap__number = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_image_button_coloured_zap, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_image_button_coloured_zap, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_DISABLED, NULL, &img_image_button_grey_zap, NULL);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                }
                {
                    // Button_Do_Password
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.button_do_password = obj;
                    lv_obj_set_pos(obj, 64, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_image_button_coloured_key, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_image_button_coloured_key, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_DISABLED, NULL, &img_image_button_grey_key, NULL);
                }
                {
                    // Button_Do_Info
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.button_do_info = obj;
                    lv_obj_set_pos(obj, 128, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_image_button_coloured_info, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_image_button_coloured_info, NULL);
                    lv_obj_add_event_cb(obj, event_handler_cb_screen_initial_setup_button_do_info, LV_EVENT_ALL, flowState);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
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
                    // Button_Do__Erase
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.button_do__erase = obj;
                    lv_obj_set_pos(obj, 0, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_image_button_coloured_erase, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_image_button_coloured_erase, NULL);
                    lv_obj_add_event_cb(obj, event_handler_cb_screen_initial_setup_button_do__erase, LV_EVENT_ALL, flowState);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
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
                    // Button_Do_Reboot
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.button_do_reboot = obj;
                    lv_obj_set_pos(obj, 256, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_image_button_coloured_exit, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_image_button_coloured_exit, NULL);
                    lv_obj_add_event_cb(obj, event_handler_cb_screen_initial_setup_button_do_reboot, LV_EVENT_ALL, flowState);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                }
            }
        }
        {
            // Panel_Message_Box_Erase
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_message_box_erase = obj;
            lv_obj_set_pos(obj, 11, 53);
            lv_obj_set_size(obj, 300, 143);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_message_box(obj);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff989292), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xffd60909), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // Label_Message_Box_Confirm_Erase
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_message_box_confirm_erase = obj;
                    lv_obj_set_pos(obj, 66, -3);
                    lv_obj_set_size(obj, LV_PCT(100), LV_PCT(40));
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    add_style_style_light_label_normal(obj);
                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffd00707), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_min_height(obj, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_max_width(obj, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Are you SURE you wish to continue as this will RESET to Factory Settings?");
                }
                {
                    lv_obj_t *obj = lv_image_create(parent_obj);
                    objects.obj0 = obj;
                    lv_obj_set_pos(obj, 11, 9);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_image_set_src(obj, &img_image_dialog_coloured_alert);
                    lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff989292), LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // Button_Message_Box_Confirm_Erase_Yes
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    objects.button_message_box_confirm_erase_yes = obj;
                    lv_obj_set_pos(obj, 8, 70);
                    lv_obj_set_size(obj, LV_PCT(50), LV_PCT(100));
                    lv_obj_add_event_cb(obj, event_handler_cb_screen_initial_setup_button_message_box_confirm_erase_yes, LV_EVENT_ALL, flowState);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    lv_obj_set_style_radius(obj, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff23f25c), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_max_height(obj, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_max_width(obj, 120, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_min_height(obj, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // Button_Message_Box_Confirm_Erase_Text_Yes
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.button_message_box_confirm_erase_text_yes = obj;
                            lv_obj_set_pos(obj, 0, 1);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_long_mode(obj, LV_LABEL_LONG_SCROLL_CIRCULAR);
                            add_style_style_light_label_normal(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "Yes");
                        }
                    }
                }
                {
                    // Button_Message_Box_Confirm_Erase_No
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    objects.button_message_box_confirm_erase_no = obj;
                    lv_obj_set_pos(obj, 142, 71);
                    lv_obj_set_size(obj, LV_PCT(50), LV_PCT(100));
                    lv_obj_add_event_cb(obj, event_handler_cb_screen_initial_setup_button_message_box_confirm_erase_no, LV_EVENT_ALL, flowState);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_ON_FOCUS|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    lv_obj_add_state(obj, LV_STATE_FOCUSED|LV_STATE_CHECKED);
                    lv_obj_set_style_radius(obj, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xfff45d3c), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_margin_left(obj, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_min_height(obj, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_max_width(obj, 120, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_max_height(obj, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // Button_Message_Box_Confirm_Erase_Text_No
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.button_message_box_confirm_erase_text_no = obj;
                            lv_obj_set_pos(obj, 1, 1);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_long_mode(obj, LV_LABEL_LONG_SCROLL_CIRCULAR);
                            add_style_style_light_label_normal(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "No");
                        }
                    }
                }
            }
        }
    }
    
    tick_screen_screen_initial_setup();
}

void tick_screen_screen_initial_setup() {
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

void create_screen_screen_main() {
    void *flowState = getFlowState(0, 5);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen_main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_SNAPPABLE|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER);
    add_style_style_dark_screen(obj);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Image_Ear_26
            lv_obj_t *obj = lv_image_create(parent_obj);
            objects.image_ear_26 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_image_set_src(obj, &img_ear_24_coloured);
        }
        {
            // Label_Page_Header_Main_Screen
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_page_header_main_screen = obj;
            lv_obj_set_pos(obj, 25, 2);
            lv_obj_set_size(obj, 285, 20);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_DOT);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_light_label_header(obj);
            lv_label_set_text(obj, "Main");
        }
        {
            // Label_Page_Footer_Main_Screen
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_page_footer_main_screen = obj;
            lv_obj_set_pos(obj, 11, 225);
            lv_obj_set_size(obj, 298, LV_SIZE_CONTENT);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_SCROLL_CIRCULAR);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_light_label_footer(obj);
            lv_label_set_text(obj, "Please Select the Option You Require. It will then Load the Appropriate Screen or Further Menu.  ");
        }
        {
            // Container_Template_Buttons_2
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.container_template_buttons_2 = obj;
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
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_17
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_17 = obj;
                    lv_obj_set_pos(obj, 64, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_18
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_18 = obj;
                    lv_obj_set_pos(obj, 128, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_26
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_26 = obj;
                    lv_obj_set_pos(obj, 192, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_30
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_30 = obj;
                    lv_obj_set_pos(obj, 256, 0);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_31
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_31 = obj;
                    lv_obj_set_pos(obj, 0, 65);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_32
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_32 = obj;
                    lv_obj_set_pos(obj, 64, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_33
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_33 = obj;
                    lv_obj_set_pos(obj, 128, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_34
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_34 = obj;
                    lv_obj_set_pos(obj, 192, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_35
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_35 = obj;
                    lv_obj_set_pos(obj, 256, 64);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_36
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_36 = obj;
                    lv_obj_set_pos(obj, 0, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_37
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_37 = obj;
                    lv_obj_set_pos(obj, 64, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_38
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_38 = obj;
                    lv_obj_set_pos(obj, 128, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_39
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_39 = obj;
                    lv_obj_set_pos(obj, 192, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
                {
                    // Template_Button_40
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.template_button_40 = obj;
                    lv_obj_set_pos(obj, 256, 130);
                    lv_obj_set_size(obj, 48, 48);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_button_blank, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_button_blank, NULL);
                }
            }
        }
    }
    
    tick_screen_screen_main();
}

void tick_screen_screen_main() {
    void *flowState = getFlowState(0, 5);
    (void)flowState;
}

void create_screen_screen_info_1() {
    void *flowState = getFlowState(0, 6);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen_info_1 = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_SNAPPABLE|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER);
    add_style_style_dark_screen(obj);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Image_Ear_27
            lv_obj_t *obj = lv_image_create(parent_obj);
            objects.image_ear_27 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_image_set_src(obj, &img_ear_24_coloured);
        }
        {
            // ImageButton_Return_2
            lv_obj_t *obj = lv_imagebutton_create(parent_obj);
            objects.image_button_return_2 = obj;
            lv_obj_set_pos(obj, 292, 214);
            lv_obj_set_size(obj, 24, 24);
            lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_return_24_coloured, NULL);
            lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_return_24_coloured, NULL);
            lv_obj_add_event_cb(obj, event_handler_cb_screen_info_1_image_button_return_2, LV_EVENT_ALL, flowState);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
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
            lv_label_set_text(obj, "Intial Configuration Information");
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
            lv_label_set_text(obj, "Basic Configuration Information                                     ");
        }
        {
            // Label_Static_Serial_Number
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_static_serial_number = obj;
            lv_obj_set_pos(obj, 12, 40);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            add_style_style_light_label_normal(obj);
            lv_label_set_text(obj, "Serial Number");
        }
        {
            // Label_Static_Zap_Created
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_static_zap_created = obj;
            lv_obj_set_pos(obj, 12, 79);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            add_style_style_light_label_normal(obj);
            lv_label_set_text(obj, "Zap Number Created");
        }
        {
            // Label_Static_Password_Created
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_static_password_created = obj;
            lv_obj_set_pos(obj, 12, 120);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            add_style_style_light_label_normal(obj);
            lv_label_set_text(obj, "Password Created");
        }
        {
            // Label_Dynamic_Zap_Number_State
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_dynamic_zap_number_state = obj;
            lv_obj_set_pos(obj, 175, 79);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_CLIP);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_light_label_normal(obj);
            lv_label_set_text(obj, "Not Set");
        }
        {
            // Label_Dynamic_Serial
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_dynamic_serial = obj;
            lv_obj_set_pos(obj, 175, 40);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_CLIP);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_light_label_normal(obj);
            lv_label_set_text(obj, "");
        }
        {
            // Label_Dynamic_Password_State
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_dynamic_password_state = obj;
            lv_obj_set_pos(obj, 175, 120);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_CLIP);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_light_label_normal(obj);
            lv_label_set_text(obj, "Not Set");
        }
    }
    
    tick_screen_screen_info_1();
}

void tick_screen_screen_info_1() {
    void *flowState = getFlowState(0, 6);
    (void)flowState;
    {
        const char *new_val = evalTextProperty(flowState, 9, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_dynamic_serial);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_dynamic_serial;
            lv_label_set_text(objects.label_dynamic_serial, new_val);
            tick_value_change_obj = NULL;
        }
    }
}


extern void add_style(lv_obj_t *obj, int32_t styleIndex);
extern void remove_style(lv_obj_t *obj, int32_t styleIndex);

static const char *screen_names[] = { "Screen_Start", "Screen_Boot_Animation", "Screen_Initial_Setup", "Screen_System_Error", "Screen_Buttons_Template", "Screen_Main", "Screen_Info_1" };
static const char *object_names[] = { "screen_start", "screen_boot_animation", "screen_initial_setup", "screen_system_error", "screen_buttons_template", "screen_main", "screen_info_1", "boot_animation_logo", "button_do_info", "button_do__erase", "button_do_reboot", "button_message_box_confirm_erase_yes", "button_message_box_confirm_erase_no", "image_button_return", "image_button_return_2", "image_ear_25", "image_button_return_1", "label_page_header_initial_setup_screen", "label_page_footer_initial_setup_screen", "container_template_buttons_1", "button_do_zap__number", "button_do_password", "template_button_19", "template_button_20", "template_button_21", "template_button_22", "template_button_23", "template_button_24", "template_button_25", "template_button_27", "template_button_28", "template_button_29", "panel_message_box_erase", "label_message_box_confirm_erase", "obj0", "button_message_box_confirm_erase_text_yes", "button_message_box_confirm_erase_text_no", "label_dark_error_system", "label_dark_error_error", "label_dark_error_code", "image_ear_24_colured", "label_page_header", "label_footer", "container_template_buttons", "template_button_1", "template_button_2", "template_button_3", "template_button_4", "template_button_5", "template_button_6", "template_button_7", "template_button_8", "template_button_9", "template_button_10", "template_button_11", "template_button_12", "template_button_13", "template_button_14", "template_button_15", "image_ear_26", "label_page_header_main_screen", "label_page_footer_main_screen", "container_template_buttons_2", "template_button_16", "template_button_17", "template_button_18", "template_button_26", "template_button_30", "template_button_31", "template_button_32", "template_button_33", "template_button_34", "template_button_35", "template_button_36", "template_button_37", "template_button_38", "template_button_39", "template_button_40", "image_ear_27", "label_page_header_1", "label_footer_1", "label_static_serial_number", "label_static_zap_created", "label_static_password_created", "label_dynamic_zap_number_state", "label_dynamic_serial", "label_dynamic_password_state" };
static const char *style_names[] = { "Style_Light_Screen", "Style_Dark_Screen", "Style_Dark_Label_Error", "Style_Light_Label_Header", "Style_Light_Label_Footer", "Style_ImageButton_Hidden", "Style_Message_Box", "Style_Light_Label_Normal" };


typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_screen_start,
    tick_screen_screen_boot_animation,
    tick_screen_screen_initial_setup,
    tick_screen_screen_system_error,
    tick_screen_screen_buttons_template,
    tick_screen_screen_main,
    tick_screen_screen_info_1,
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
    create_screen_screen_initial_setup();
    create_screen_screen_system_error();
    create_screen_screen_buttons_template();
    create_screen_screen_main();
    create_screen_screen_info_1();
}
