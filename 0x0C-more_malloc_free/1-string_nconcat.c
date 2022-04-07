#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1 : string 1
 * @s2 : string 2
 * @n : unsigned int size of n
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k;
	char *p;

	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j])
			j++;
	}
	if (n > j)
		n = j;
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
		return (NULL);
	for (k = 0 ; k < i; k++)
		p[k] = s1[k];
	for (k = i; k < i + n; k++)
		p[k] = s2[k - i];
	p[k] = '\0';
	return (p);
}
