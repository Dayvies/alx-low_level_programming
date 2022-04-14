#ifndef VARIAD_H
#define VARIAD_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);

/**
 * struct op - Struct op
 *
 * @type: The operator
 * @f: The function associated
 */
typedef struct op
{
	char type;
	void (*f)(va_list list);
} op_t;

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif /* VARIAD_H */
