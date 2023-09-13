#include "main.h"

/**
* jack_bauer - prints minutes of the day
* Description: shows hours and minutes in a day
*
* Return: Always 0 (Success)
*/

void jack_bauer(void)
{

int totalMinutes;

	for (totalMinutes = 0; totalMinutes < 1440; totalMinutes++)
	{
		int hours = totalMinutes / 60;
		int minutes = totalMinutes % 60;

		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		_putchar(':');
		_putchar((minutes / 10) + '0');
		_putchar((minutes % 10) + '0');

		_putchar('\n');


	}
}
