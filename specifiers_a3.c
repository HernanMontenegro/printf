#include "holberton.h"

/**
* un_int_process - prints an unsigned int and keeps count
* @n: Number to print
* @p: pointer to count variable
*
* Return: void
*/
void un_int_process(unsigned int n, int *p)
{
	unsigned int m;

	m = n;

	/* recursive */
	if (m / 10)
		un_int_process((m / 10), p);
	/* end, prints and counts */
	_putchar((m % 10) + '0', p);
}

/**
* print_u_int - supply the value to the print function
* @args: List to get va_arg
* @p: pointer to count variable
*
*/
void print_u_int(va_list args, int *p)
{
	unsigned int n = va_arg(args, unsigned int);

	un_int_process(n, p);
}
