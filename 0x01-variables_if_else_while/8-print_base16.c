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
	char baseSixteen[16] = "0123456789abcdef";

	int counter = 0;

	while (counter < 16)
	{
		putchar(alphaBet[counter]);
		counter++;
	}
	putchar('\n');
	return (0);
}
