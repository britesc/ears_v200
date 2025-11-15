#include <stdio.h>
#include <string.h>
#include <lvgl.h>

#include "vars.h"
#include "screens.h"
#include "structs.h"
#include "ui.h"

char global_variable_error_code[100] = { 0 };
bool global_variable_has_valid_zap_number = false;
bool global_variable_has_valid_password = false;

void init_vars() {
	global_variable_has_valid_zap_number = false;
}

void tick_vars() {
    // nothing here, you can add some code here to watch var changes
}

// Error Code
const char *get_var_global_variable_error_code() {
    return global_variable_error_code;
}

void set_var_global_variable_error_code(const char *value) {
    strncpy(global_variable_error_code, value, sizeof(global_variable_error_code) / sizeof(char));
    global_variable_error_code[sizeof(global_variable_error_code) / sizeof(char) - 1] = 0;
}

// Zap Number
bool get_var_global_variable_has_valid_zap_number() {
    return global_variable_has_valid_zap_number;
}

void set_var_global_variable_has_valid_zap_number(bool value) {
    global_variable_has_valid_zap_number = value;
}

// Password
bool get_var_global_variable_has_valid_password() {
    return global_variable_has_valid_password;
}

void set_var_global_variable_has_valid_password(bool value) {
    global_variable_has_valid_password = value;
}
	