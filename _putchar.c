#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @cnt_p: Keep count of characters printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c, int *cnt_p)
{
	*cnt_p = *cnt_p + 1;
	return (write(1, &c, 1));
}
