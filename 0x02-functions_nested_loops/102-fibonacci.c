#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	int one = 1;

	int two = 2;

	unsigned long long int sum = one + two;

	printf("%d, ", one);
	printf("%d, ", two);

	for (i = 0; i < 48; i += 1)
	{
		sum = two + one;
		one = two;
		two = sum;
		if (i == 47)
		{
			printf("%llu", sum);
			break;
		}
		printf("%llu, ", sum);

	}
	printf("\n");
	return (0);
}
