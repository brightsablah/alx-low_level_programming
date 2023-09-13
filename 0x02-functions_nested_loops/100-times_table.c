#include "main.h"

/**
* print_times_table - prints 9 times table
* Description:
* @n: input number
* Return: Always 0 (Success)
*/

void print_times_table(int n)
{

int i, j, result;

	if (n < 0 || n > 15)
	return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				_putchar(' ');
			}

			if (result < 10)
			{
				_putchar(' ');
			}

			if (result >= 10)
			{
				_putchar(result / 100 + '0');
			}
			if (result >= 100)
			{
				_putchar((result / 10) % 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
