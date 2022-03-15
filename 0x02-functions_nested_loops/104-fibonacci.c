#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, m1, m2, n1, n2 = 0;

	unsigned long int one = 1;

	unsigned long int two = 2;

	unsigned long int sum = one + two;

	printf("%lu, ", one);
	printf(", %lu", two);

	for (i = 0; i < 90; i += 1)
	{
		sum = two + one;
		one = two;
		two = sum;
		printf(", %lu", sum);

	}

	m1 = one / 1000000000;
	m2 = one % 1000000000;
	n1 = two / 1000000000;
	n2 = two % 1000000000;
	for (i = 92; i < 99; i++)
	{
		printf(", %lu", n1 + (n2 / 1000000000));
		printf("%lu",  (n2 % 1000000000));
		n1 = n1 + m1;
		m1 = n1 - m1;
		n2 = n2 + m2;
		m2 = n2 - m2;
	}
	printf("\n");
	return (0);
}
