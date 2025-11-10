#include <Arduino.h>
#include "RP2040Support.h"
#include "actions.h"
//#include "PicoFlashEeprom.h"
#include "vars.h"
#include <D_Serial_Debug.h>


void action_action_reboot_system(lv_event_t * e) {
	
	D_SerialPrintln("Rebooting...");	
	rp2040.reboot();	
}