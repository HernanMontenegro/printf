#include "holberton.h"

/**
* unsigned_int_process - prints an unsigned int and keeps count
* @n: unsigned integer to print
* @p: pointer to count variable
* -------------------------------------------
* Return: void
*/
void unsigned_int_process(unsigned int n, int *p)
{
        int m;

	/* checks if it's the end of the number */
        if (n == 0)
                return;
	/* Assignation and calulation */
        m = n % 10;
        n = n / 10;
	/* recursive */
        unsigned_int_process(n, p);
	/* end, prints and counts */
        _putchar(m + '0');
        *p = *p + 1;
}

/**
* print_unsigned_int - supply the value to the print function
* @args: List to get va_arg
* @p: pointer to count variable
* -------------------------------------------
* Return: void
*/
void print_unsigned_int(va_list args, int *p)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned_int_process(n, p);
}

/**
* octal_int_process - prints an unsigned int and keeps count
* @n: unsigned integer to print
* @p: pointer to count variable
* -------------------------------------------
* Return: void
*/
void octal_int_process(unsigned int n, int *p)
{
	unsigned int m;

	/* checks if it's the end of the number */
	if (n == 0)
		return;
	/* Assignation and calulation */
	m = n % 8;
	n = n / 8;
	/* recursive */
	octal_int_process(n, p);
	/* end, prints and counts */
	_putchar(m + '0');
	*p = *p + 1;
}

/**
* print_octal_int - gives the value to the print function
* @args: List to get va_arg
* @p: pointer to count variable
* -------------------------------------------
* Return: void
*/
void print_octal_int(va_list args, int *p)
{
	unsigned int n = va_arg(args, unsigned int);
	octal_int_process(n, p);
}
