#include "vars.h"

#include <lvgl.h>


#include "screens.h"
#include "structs.h"
#include "ui.h"

char global_variable_error_code[100] = { 0 };
bool global_variable_has_valid_zap_number;
bool global_variable_has_valid_password;
char zap_number_state_text[100] = { 0 };


void init_vars() {
	set_var_global_variable_error_code("0000");
	set_var_zap_number_state_text("Not Set");
	set_var_global_variable_has_valid_zap_number(false);
	set_var_global_variable_has_valid_password(false);	
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
	
const char *get_var_zap_number_state_text() {
    return zap_number_state_text;
}

void set_var_zap_number_state_text(const char *value) {
    strncpy(zap_number_state_text, value, sizeof(zap_number_state_text) / sizeof(char));
    zap_number_state_text[sizeof(zap_number_state_text) / sizeof(char) - 1] = 0;
}