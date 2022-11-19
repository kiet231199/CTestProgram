#include <stdio.h>
#include "type.h"
#include "get_input.h"

/* This function use to get 2 integer number from user
Agrument:
	KIET_U32 firstNumber: the first number
	KIET_U32 secondNumber: the second number */
void KIET_GetTwoNumbers(KIET_U32 *pFirstNumber, KIET_U32 *pSecondNumber) {
	KIET_U32 firstNumber, secondNumber;
	printf("Enter two number: ");
	scanf("%u%u", &firstNumber, &secondNumber);
	*pFirstNumber = firstNumber;
	*pSecondNumber = secondNumber;
	return;
}
