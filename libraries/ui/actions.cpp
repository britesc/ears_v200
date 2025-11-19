#include <Arduino.h>
#include "RP2040Support.h"
#include "actions.h"
//#include "PicoFlashEeprom.h"
#include "vars.h"
#include <D_Serial_Debug.h>
#include "PicoFlashEeprom.h"


void action_action_reboot_system(lv_event_t * e) {	
	D_SerialPrintln("Rebooting...");	
	rp2040.reboot();	
}

void action_action_button_message_box_confirm_erase_yes(lv_event_t * e) {
	D_SerialPrintln("Resetting Eeprom...");
	PicoFlashEeprom PFE((uint8_t)PICO_FLASH_EEPROM_SIZE);	
	set_var_global_variable_has_valid_zap_number(false);  
  PFE.begin();
	PFE.initializeEeprom();
}

void action_action_get_serial_number(lv_event_t *e) {
    // TODO: Implement action action_get_serial_number here
}