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
	int i = 0;

	if (!c)
		return (s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
