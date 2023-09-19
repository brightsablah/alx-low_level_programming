#include "main.h"

/**
* print_rev - prints a string in reverse
* Description:
* @str: pointer to string variable address
* Return: Always 0 (Success)
*/

void print_rev(char *str)
{

	int len;

	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

/* moving to beginning of string */
	str--;

	while (len > 0)
	{
		_putchar(*str);
		str--;
		len--;
	}

	_putchar('\n');

}
