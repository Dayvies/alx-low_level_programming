#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * 
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	int z = 0;

	int length = 0;

	int sum = 0;

	for (i = 0; i < 1024; i += 1)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			sum = sum + i;
	}
	length = snprintf(NULL, 0, "%d", sum);
       	*str = malloc(length + 1);
	snprintf(str, length + 1, "%d", sum);
	for (z = 0; z < length; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
	return (0);
}
