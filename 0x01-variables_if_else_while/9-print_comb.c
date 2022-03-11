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
	int counter = 0;

	while (counter < 10)
	{
		putchar(counter + '0');
		if (counter == 9)
			break;
		putchar(',');
		putchar(' ');
		counter++;
	}
	putchar('\n');
	return (0);
}
