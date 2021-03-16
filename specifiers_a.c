#include "holberton.h"


/**
 * binary_process - prints an int in binary and keeps count
 * @n: Number to print
 * @p: pointer to count variable
 * @bool: checks if is the first call
 *
 * Return: void
 */
void binary_process(unsigned int n, int *p)
{
	unsigned int m;

	m = n;

	/* recursive */
	if (m / 2)
		binary_process((m / 2), p);
	/* end, prints and counts */
	_putchar((m % 2) + '0', p);
}

/**
 * print_binary - supply the value to the print function
 * @args: List to get va_arg
 * @p: pointer to count variable
 *
 */
void print_binary(va_list args, int *p)
{
	int n = va_arg(args, unsigned int);

	binary_process(n, p);
}
