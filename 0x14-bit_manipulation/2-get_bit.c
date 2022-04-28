#include "main.h"

/**
 * get_bit - get value at binary index
 * @n : number
 * @index: index
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	n = n >> index;
	if (n == 0 && index == 0)
		return (0);
	if (n)
	{
		val = n & 1;
		return (val);
	}
	else
		return (-1);
}
