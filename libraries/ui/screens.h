#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *screen_start;
    lv_obj_t *screen_system_error;
    lv_obj_t *label_dark_error_system;
    lv_obj_t *label_dark_error_error;
    lv_obj_t *label_dark_error_code;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_SCREEN_START = 1,
    SCREEN_ID_SCREEN_SYSTEM_ERROR = 2,
};

void create_screen_screen_start();
void tick_screen_screen_start();

void create_screen_screen_system_error();
void tick_screen_screen_system_error();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/