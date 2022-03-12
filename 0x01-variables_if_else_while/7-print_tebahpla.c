#include <stdio.h>
/**
 * main - main block
 * Description: prints the lowercase alphabet
 * in reverse, followed by a new line
 * Return: 0
 */
int main(void)
{
	/*using ASCII codes*/
	int z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
