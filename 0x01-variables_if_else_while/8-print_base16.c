#include <stdio.h>

/**
  * main- Entry point
  *
  * Return: Always 0 (Success)
*/


int main(void)
{
	int num;
	int lc;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	lc = 97;
	while (lc < 103)
	{
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
