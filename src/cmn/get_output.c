#include <stdio.h>
#include <string.h>
#include "type.h"
#include "get_output.h"

/* This function use to print message with log level 
Agrument:
	KIET_U8 messagep[]: user message 
	KIET_U8 logLevel: log level */
void KIET_Log(KIET_U8 message[], KIET_U8 logLevel) {
	printf("level=%x	", logLevel);
	printf("mes=%s.\n", message);
	return;
}
