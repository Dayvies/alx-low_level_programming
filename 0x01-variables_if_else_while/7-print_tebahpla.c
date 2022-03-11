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

	int counter = 25;

	while (counter => 0)
	{
		putchar(alphaBet[counter]);
		counter--;
	}
	putchar('\n');
	return (0);
}
