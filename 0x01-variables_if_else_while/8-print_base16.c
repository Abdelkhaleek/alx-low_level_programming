#include <stdio.h>
/**
 * main -Entry point
 * Description: 'rints all the numbers of base 16 in lowercase'
 * Return: Always 0
 */
int main(void)
{
	int n;
	int h;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (h = 97; h <= 102; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
