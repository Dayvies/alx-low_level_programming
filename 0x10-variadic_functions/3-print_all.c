#include "variadic_functions.h"
void op_float(va_list list);
void op_char(va_list list);
void op_string(va_list list);
void op_int(va_list list);
/**
 * print_all - print everything
 * @format :strings
 * @...: ellipsis
 * Return: Void
 */
void print_all(const char *const format, ...)
{
	op_t ops[] = {
	    {'c', op_char},
	    {'f', op_float},
	    {'i', op_int},
	    {'s', op_string}};
	int i = 0, j = 0;
	char *sep = "";
	va_list list;

	va_start(list, format);
	while (format[i] && format)
	{
		j = 0;
		while (ops[j].type)
		{
			if (format[i] == ops[j].type)
			{
				printf("%s", sep);
				sep = ", ";
				ops[j].f(list);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
/**
 * op_char - print char
 * @list : list
 * Return: Void
 */
void op_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * op_string - print char
 * @list : list
 * Return: Void
 */
void op_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (!str)
		str = "(nil)";
	printf("%s", str);
}
/**
 * op_float - float
 * @list : list
 * Return: Void
 */
void op_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * op_int - print char
 * @list : list
 * Return: Void
 */
void op_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
