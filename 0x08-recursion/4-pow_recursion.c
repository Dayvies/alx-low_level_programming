#include "main.h"

/**
 * _pow_recursion - x power y
 * @x : number
 * @y : power
 * Return: x power y
 * On error, 0 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * _pow_recursion(x, y - 1));
}
