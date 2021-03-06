#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers should be here */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit < 5 && lastDigit != 0)
	{
		printf("Last digit of %d is %d ", n, lastDigit);
		printf("and is less than 6 and not 0\n");
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d ", n, lastDigit);
		printf("and is 0\n");
	}
	else
	{
		printf("Last digit of %d is %d ", n, lastDigit);
		printf("and is greater than 5\n");
	}
	return (0);
}
