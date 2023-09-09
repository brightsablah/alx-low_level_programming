#include <stdio.h>

/**
  * main - Entry point
  * Descritption: A program to print alphabets
  * excluding some characters
  * Return: Always 0 (Success)
*/

int main(void)
{
	int lc;

	lc = 97;
	while (lc <= 122)
	{
		if (lc == 101 || lc == 113)
		{
			lc++;
			continue;
		}
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
