/*
 * WeightLogger_v0_2.c
 *
 * Created: 10/22/2019 11:03:57 AM
 * Author : mlavoie4
 */ 

#include <avr/io.h>
#include "pff.h"
#include "diskio.h"

//in
#define MISO 4
//out
#define MOSI 3
#define SCK 5
#define CS 2


char wrData[128] = "hello";

const char filPth[64] = "\weightLog";

int main(void)
{
    char *ptr;
    long p1, p2;
    BYTE res;
    UINT s1, s2, s3, ofs, cnt, w;
    FATFS fs;			/* File system object */
    DIR dir;			/* Directory object */
    FILINFO fno;		/* File information */
	
	res = disk_initialize();
	
	pf_mount(&fs);
	
	pf_open(filPth);
	
	while(1)
	{
		cnt = sizeof(wrData);
		pf_write(wrData, cnt, &w);
	}
}