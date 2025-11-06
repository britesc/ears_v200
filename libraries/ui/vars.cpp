#include <stdio.h>
#include <string.h>
#include <lvgl.h>

#include "vars.h"
#include "screens.h"
#include "structs.h"
#include "ui.h"

char gobal_variable_error_code[100] = { 0 };

const char *get_var_gobal_variable_error_code() {
    return gobal_variable_error_code;
}

void set_var_gobal_variable_error_code(const char *value) {
    strncpy(gobal_variable_error_code, value, sizeof(gobal_variable_error_code) / sizeof(char));
    gobal_variable_error_code[sizeof(gobal_variable_error_code) / sizeof(char) - 1] = 0;
}
