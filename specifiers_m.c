#include "holberton.h"

/**
 * print_int - prints an int and keeps count
 * @n: Number to print
 * @p: pointer to count variable
 *
 * Return: d
 */
void print_int(int n, int *p)
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
	print_int(n, p);
/* end, prints and counts */
	_putchar(m);
	*p = *p + 1;
}


/**
 * print_str - prints a string
 * @str: Number to print
 * @p: pointer to count variable
 *
 */
void print_str(char *str, int *p)
{
	int i;

	if (!str)
		return;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		*p = *p + 1;
	}
}
