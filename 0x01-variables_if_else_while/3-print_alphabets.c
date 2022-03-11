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
	char alphaBet[26] = "abcdefghijklmnopqrstuvwxyz";

	char alphaBet2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int counter = 0;

	while (counter < 26)
	{
		putchar(alphaBet[counter]);
		counter++;
	}
	counter = 0;
	while (counter < 26)
	{
		putchar(alphaBet2[counter]);
		counter++;
	}
	putchar('\n');
	return (0);
}
