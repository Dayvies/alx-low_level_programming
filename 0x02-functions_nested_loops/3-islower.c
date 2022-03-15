/**
 * _islower - checks if character is lower or uppercase
 * @c : character to be checked in ASCII
 *
 * Return: On success 1
 * On error, 0 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
