#ifndef EEZ_LVGL_UI_EVENTS_H
#define EEZ_LVGL_UI_EVENTS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void action_action_reboot_system(lv_event_t * e);
extern void action_action_button_message_box_confirm_erase_yes(lv_event_t * e);
extern void action_action_button_message_box_confirm_erase_no(lv_event_t * e);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_EVENTS_H*/