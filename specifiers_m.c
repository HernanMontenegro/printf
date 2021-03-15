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
	_putchar(m + '0');
	*p = *p + 1;
}

/**
 * print_int - supply the value to the print function
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
* str_process - prints a string given
* @str: string to print
* @p: keep count
* ---------------------------------
* Return: void
*/
void str_process(char *str, int *p)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		*p = *p + 1;
	}
}

/**
 * print_str - prints a string
 * @args: List to get va_arg
 * @p: pointer to count variable
 *
 */
void print_str(va_list args, int *p)
{
	char *str = va_arg(args, char *);

	if (!str)
		return;

	str_process(str, p);
}

/**
 * print_char - prints a char
 * @args: List to get va_arg
 * @p: pointer to count
 *
 */

void print_char(va_list args, int *p)
{
	char c = va_arg(args, int);

	_putchar(c);
	*p = *p + 1;
}
