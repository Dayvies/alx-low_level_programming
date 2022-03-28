#include "main.h"

/**
 * _strstr -finds the first occurrence of the substring
 * @haystack : source
 * @needle : to be checked
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;
	unsigned int count = 0;
	unsigned int nLength = 0;
	int cond = 0;

	while (needle[nLength])
		nLength++;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = i;
		for (k = 0; k < nLength; k++)
		{
			if (haystack[j] == needle[k] && cond == 1)
				count = count + 1;
			else if (haystack[j] == needle[k] && cond == 0)
			{
				count = 1;
				cond = 1;
			}
			else
			{
				cond = 0;
				count = 0;
			}
			if (count == nLength)
				return (&haystack[i]);
			j++;
		}
	}
	return (NULL);
}
