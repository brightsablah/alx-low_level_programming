#include "main.h"

/**
* swap_int - swaps two integer values
* Description:
* @a: pointer to first input value
* @b: pointer to second input value
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;


}
