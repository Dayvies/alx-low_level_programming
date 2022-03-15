#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabets in lowercase 10 times
 * uses _putchar function
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alBet[26] = "abcdefghijklmnopqrstuvwxyz";

	int counter;

	for (counter = 0 ; counter <= 10; counter++)
	{
		int count2 = 0;

		while (count2 < 26)
		{
			_putchar(alBet[count2]);
			count2++;
		}
		_putchar('\n');
	}
}
