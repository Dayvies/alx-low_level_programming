#include "main.h"

/**
 * *_strchr - returns first occurence of letter
 * @s : source
 * @c : letter to be found
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	if (!c)
		return (s);
	while(*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
