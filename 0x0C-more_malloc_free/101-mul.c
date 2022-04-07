#include "main.h"
#include <stdio.h>

int get_length(char *str);
void mul(char *s1, int dig2 ,int len1 , int i, int *res, int *hold, int len);
/**
 * main - main program
 * @argc : number of args
 * @argv : arguments
 * Return : o
 */
int main(int argc, char *argv[])
{
	int i = 0, z, w = 0, len1, len2, len, *res, *hold, dig2;
	char *s;
    
	s = "Error";
	len1 = get_length(argv[1]);
	len2 = get_length(argv[2]);
	if (argc != 3 || len1 < 1 || len2 < 1)
	{
		while (s[i] != '\0')
			_putchar(s[i++]);
		_putchar('\n');
		exit(98);
	}
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	hold = malloc(sizeof(int) * len);
	for (i = 0; i < len; i++)
		res[i] = 0;
	for (i = len2 - 1; i >= 0; i--)
	{
		dig2 = argv[2][i] - '0';
		mul (argv[1], dig2, len1, i, res, hold, len);
	}
	for (z = 0; z < len; z++)
	{	
		if (w == 0 && res[z] == 0 && z != len - 1)
			continue;
		_putchar(res[z] + '0');
		w = 1;
	}
	_putchar('\n');
	free(res);
	free(hold);
	return (0);
}
/**
 * mul- multiplies and adds arrays
 * @s1 : first number
 * @dig2: part of second number to be multiplied
 * @len1: length of s1
 * @i: gives position to start mul
 * @res: result array
 * @hold: holds temp arrays
 * @len : length of result array
 * Return : Nothing
 */
void mul(char *s1, int dig2 ,int len1 , int i, int *res, int *hold, int len)
{
	int j, dig1, len2, jstart, carryh = 0, carryR = 0;

	len2 = len - len1 -1;
	jstart = len - (len2 - i);
	for (j = 0; j < len; j++)
		hold[j] = 0;
	for (j = len1 - 1; j >= 0; j--)
	{
		dig1 = ((s1[j] - '0') * dig2) + carryh;
		hold[jstart] = dig1 % 10;
		carryh = dig1 / 10;
		jstart--;
	}
	if (carryh > 0)
		hold[jstart] = carryh;
	for (j = len -1; j >= 0; j--)
	{
		dig1 = hold[j] + res[j] + carryR;
		if (dig1 == 0)
			continue;
		res[j] = dig1 % 10;
		carryR = dig1 / 10;
	}
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
		if (str[counter] < '0' || str[counter] > '9')
			return (-1);
		counter = counter + 1;
	}
	return (counter);
}
