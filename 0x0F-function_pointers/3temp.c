#include "3-calc.h"

/**
 * main - main function
 * @argc - number of arguments
 * @argv - array of arguments in string
 * Return: always
 */
int main (int argc , char *argv[])
{
	int result = 0, a, b;
	char x;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = *argv[2];
	if ((x == '/' || x == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(argv[2]))(a, b);
	printf("%d\n", result);
	return (0);
}
