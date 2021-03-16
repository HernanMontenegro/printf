#include "holberton.h"

/**
* binary_process - prints an int in binary and keeps count
* @n: Number to print
* @p: pointer to count variable
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
	unsigned int n = va_arg(args, unsigned int);

	binary_process(n, p);
}


/**
* octal_process - prints an int in binary and keeps count
* @n: Number to print
* @p: pointer to count variable
*
* Return: void
*/
void octal_process(unsigned int n, int *p)
{
	unsigned int m;

	m = n;

	/* recursive */
	if (m / 8)
		octal_process((m / 8), p);
	/* end, prints and counts */
	_putchar((m % 8) + '0', p);
}

/**
* print_octal - supply the value to the print function
* @args: List to get va_arg
* @p: pointer to count variable
*
*/
void print_octal(va_list args, int *p)
{
	unsigned int n = va_arg(args, unsigned int);

	octal_process(n, p);
}
