#include <Arduino.h>
#include "RP2040Support.h"
#include "actions.h"
//#include "PicoFlashEeprom.h"
#include "vars.h"
#include "screens.h"
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

void action_action_get_cpu_id(lv_event_t *e) {
    // TODO: Implement action action_get_cpu_id here
	uint8_t id[16];
	rp2040.cpuid();

	char buf[64];
	int pos = 0;
	
	for (int i = 0; i < 16; i++) {
    pos += snprintf(buf + pos, sizeof(buf) - pos, "%02X", id[i]);
	}
	set_var_global_variable_cpu_id(buf);    
}

void action_action_update_zap_eeprom(lv_event_t * e) {
    // TODO: Implement action update_zap_eeprom here
	PicoFlashEeprom PFE((uint8_t)PICO_FLASH_EEPROM_SIZE);
  PFE.begin();
  PFE.writeZapNumber(get_var_global_text_area_zap_number());
}
