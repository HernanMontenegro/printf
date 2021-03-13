#include "holberton.h"

/**
 * print_int - prints an int and keeps count
 * @param: d
 *
 * Return: d
 */

void print_int(int n, int *p)
{
	int m;

/* checks if n is negative */	
	if (n < 0);
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
	print_int(n, p);

/* end, prints and counts */
	_putchar(m);
	*p = *p + 1;
}
