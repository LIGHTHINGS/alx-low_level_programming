#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int d = 30;
	int c = 61;
	char b;

	while (d <= 39)
	{
		b = putchar(d);
		d++;
	}
	while (c <= 66)
	{
		b = b + c;
		c++;
	}
	putchar(b);
	putchar('\n');
	return (0);
}
