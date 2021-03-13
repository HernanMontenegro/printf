#include "holberton.h"

/**
 * print_process - prints an int and keeps count
 * @n: Number to print
 * @p: pointer to count variable
 *
 * Return: d
 */
void int_process(int n, int *p)
{
	int m;

/* checks if n is negative */
	if (n < 0)
	{
		_putchar('-');
		*p = *p + 1;
		n = -n;
	}
/* checks if it's the end of the number */
	if (n == 0)
		return;
/* Assignation and calulation */
	m = n % 10;
	n = n / 10;
/* recursive */
	int_process(n, p);
/* end, prints and counts */
	_putchar(m);
	*p = *p + 1;
}

/**
 * print_int - prints an int and keeps count
 * @args: List to get va_arg
 * @p: pointer to count variable
 *
 */

void print_int(va_list args, int *p)
{
	int n = va_arg(args, int);
	int_process(n, p);
}


/**
 * print_str - prints a string
 * @args: List to get va_arg
 * @p: pointer to count variable
 *
 */
void print_str(va_list args, int *p)
{
	int i;
	char *str = va_arg(args, char *);

	if (!str)
		return;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		*p = *p + 1;
	}
}

/**
 * print_char - prints a char
 * @args: List to get va_arg
 * @p: pointer to count
 *
 */

void print_char(va_list args, int *p)
{
	_putchar(va_arg(args, int));
	*p = *p + 1;
}
