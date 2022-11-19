#include <stdio.h>
#include "type.h"
#include "add.h"

void KIET_GetInput(KIET_U32 *pFirstNumber, KIET_U32 *pSecondNumber) {
	KIET_U32 firstNumber, secondNumber;
	printf("Enter two number: ");
	scanf("%u%u", &firstNumber, &secondNumber);
	*pFirstNumber = firstNumber;
	*pSecondNumber = secondNumber;
	return;
}

int main() {
	KIET_U32 options;
	KIET_U32 firstNumber, secondNumber;
	printf("Choose your calculation (1+ 2- 3x 4/): ");
	scanf("%u", &options);
	switch (options) {
		case 1:
			printf("You chose plus.\n");
			KIET_GetInput(&firstNumber, &secondNumber);
			printf("Result = %u.\n", add(firstNumber, secondNumber));
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
