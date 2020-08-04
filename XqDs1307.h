/***************************************************************
 * DS1307 RTC driver for Arduino
 *
 *
 **************************************************************/
#ifndef _XQ_DS1307_H
#define _XQ_DS1307_H

void xqDs1307Init();
void xqDs1307GetTime(
		unsigned char year,
		unsigned char mon,
		unsigned char day,
		unsigned char dow,
		unsigned char hour,
		unsigned char min,
		unsigned char second
		);
void xqDs1307SetTime(
		unsigned char* year,
		unsigned char* mon,
		unsigned char* day,
		unsigned char* dow,
		unsigned char* hour,
		unsigned char* min,
		unsigned char* second
		);


#endif /* #ifdef _XQ_DS1307_H */