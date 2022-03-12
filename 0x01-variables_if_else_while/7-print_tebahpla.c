#include <stdio.h>
/**
 * main - main block
 * Description: prints the lowercase alphabet
 * in reverse, followed by a new line
 * Return: 0
 */
int main(void)
{
	int z = 122;

	while (97 <= z)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
