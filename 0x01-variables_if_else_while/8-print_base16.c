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
	int d = 48;
	int c = 97;

	while (d <= 57)
        {
		putchar(d);
		d++;
	}
	while (c <= 102)
        {
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
