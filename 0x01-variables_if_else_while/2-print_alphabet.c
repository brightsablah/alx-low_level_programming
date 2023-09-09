#include <stdio.h>

/**
  * main -Entry point
  * Description: A program that prints alphabets in lowercase
  * using putchar funtion
  * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
