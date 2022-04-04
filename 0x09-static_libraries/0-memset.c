#include "main.h"

/**
 * *_memset - sets memory with desired buffer
 * @b : buffer
 * @s : source
 * @n : size to be copied
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
