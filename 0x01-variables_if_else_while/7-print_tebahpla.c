#include <stdio.h>

/**
  *main- Entry point
  *
  *Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	num = 122;
	while (num >= 97)
	{
		putchar(num);
		num--;
	}
	putchar('\n');
	return (0);
}
