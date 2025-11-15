#ifndef __EEPROM_DEFINES_H__
	#define __EEPROM_DEFINES_H__

	// Zap Number
	#define START_ZAP_NUMBER             2
	#define LENGTH_ZAP_NUMBER            6
	#define LENGTH_ZAP_NUMBER_BUFFER    (LENGTH_ZAP_NUMBER + 1)

	
	// Password Hash
	#define START_PASSWORD_HASH         (START_ZAP_NUMBER + LENGTH_ZAP_NUMBER)
	#define LENGTH_PASSWORD_HASH         9
	#define LENGTH_PASSWORD_HASH_BUFFER (LENGTH_PASSWORD_HASH + 1)
#endif // __EEPROM_DEFINES_H__