#include <stdio.h>

/**
  * main - Entry point
  * Description: A program to print alphabet
  * in lowercase and in uppercase
  * Return: Always 0 (Success)
*/

int main(void)
{
	int lc;
	int uc;

	lc = 97;
	uc = 65;

	do {
		putchar(lc);
		lc++;
	} while (lc <= 122);

	while (uc < 91)
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return (0);
}
