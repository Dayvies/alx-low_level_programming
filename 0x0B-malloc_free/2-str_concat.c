#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1 : string 1
 * @s2 : string 2
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int j = 0;
	int z = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i])
			i++;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		while (s2[j])
			j++;
	}
	p = malloc(sizeof(char) * (j + i + 1));
	for (z = 0; z < i; z++)
	{
		p[z] = s1[z];
	}
	for (z =  i; z < (j + i + 1); z++)
	{
		p[z] = s2[z - i];
	}
	p[z] = '\0';
	return (p);
}
