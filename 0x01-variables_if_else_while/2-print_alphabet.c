#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: To print alphabets
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
