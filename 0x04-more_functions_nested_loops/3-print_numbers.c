#include "main.h"
/**
 * print_numbers - to return numbers from
 * 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int n = 48;
	while ( n < 58 )
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
