#include "holberton.h"

/**
 * int_process - prints an int and keeps count
 * @n: Number to print
 * @p: pointer to count variable
 *
 * Return: void
 */
void int_process(int n, int *p)
{
	unsigned int m;

	/* checks if n is negative */
	if (n < 0)
	{
		_putchar('-', p);
		m = -n;
	}
	else
		m = n;
	/* recursive */
	if (m / 10)
		int_process((m / 10), p);
	/* end, prints and counts */
	_putchar((m % 10) + '0', p);
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
