#include "main.h"

/**
* print_last_digit - prints last digit of an int
* @a: input int value
*
* Return: Always 0 (Success)
*/

int print_last_digit(int a)
{
int b;

/* making number absolute */
	if (a < 0)
	{
		a = -a;
	}



/* returning the last digit */


	b = a % 10;


	if (b < 0)
	{
		b = -b;
	}

	_putchar(b + '0');


return (b);

}
