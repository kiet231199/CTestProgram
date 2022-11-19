#include <stdio.h>
#include "type.h"
#include "add.h"
#include "level.h"

/* Common library */
#include "get_input.h"
#include "get_output.h"

int main() {
	KIET_U32 options;
	KIET_U32 firstNumber, secondNumber;
	KIET_U32 result;
	printf("Choose your calculation (1+ 2- 3x 4/): ");
	scanf("%u", &options);
	switch (options) {
		case 1:
			printf("You chose plus.\n");
			KIET_GetTwoNumbers(&firstNumber, &secondNumber);
			result = KIET_Add(firstNumber, secondNumber);
			printf("Result = %u.\n", result);
			if(result >= 10) KIET_Log("Result greater than 10.\n", KIET_LOG_LEVEL_BASE_INFO);
			break;
		case 2:
			printf("You chose subtract.\n");
			break;
		case 3:
			printf("You chose mulitply.\n");
			break;
		case 4:
			printf("You chose divide.\n");
			break;
		default:
			break;
	}
	return 0;
}
