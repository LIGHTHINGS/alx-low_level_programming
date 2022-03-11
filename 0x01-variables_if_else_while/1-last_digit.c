#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5 and 6
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/* your code goes there */
	if (lastDigit > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, lastDigit);
	else if (lastDigit < 6)
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("last digit of %i is %i and is 0\n", n, lastDigit);
	return (0);
}
