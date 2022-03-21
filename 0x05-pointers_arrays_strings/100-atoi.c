#include "main.h"

int get_length(char *str);
/**
 * _atoi - convert string to int
 * @s : string
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
int _atoi(char *s)
{
	int length, i;

	int numstart = 0;

	int sign = 1;

	unsigned int integer = 0;

	length = get_length(s);

	for (i = 0; i < length; i++)
	{
		if ((s[i] - '0') >= 0 && (s[i] - '0') <= 9)
		{
			integer = (integer * 10) + (s[i] - '0');
			numstart = 1;
		}
		else
		{
			if (numstart == 1)
				break;
			if (numstart == 0 && s[i] == '-')
				sign = sign * -1;
			else
			{
				sign = sign * 1;
			}
		}
	}
	return (integer * sign);
}
/**
 * get_length - check length of string
 * @str : string
 * Return: length
 * On error, 0 is returned, and errno is set appropriately.
 */
int get_length(char *str)
{
	int counter = 0;

	while (str[counter])
	{
		counter = counter + 1;
	}
	return (counter);
}

