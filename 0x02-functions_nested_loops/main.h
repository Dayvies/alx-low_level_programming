#include <unistd.h>

/**
 * _putchar -writes character to stdout
 * @c : character to print
 *
 * Return : On Success 1
 * On error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
