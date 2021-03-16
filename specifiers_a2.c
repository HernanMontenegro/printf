#include "holberton.h"

/**
* hexxa_process - prints an int in MAYUS hexadecimal
* @n: Number to print
* @p: pointer to count variable
*
* Return: void
*/
void hexxa_process(unsigned int n, int *p)
{
	unsigned int m;

	m = n % 16;

	/* recursive */
	if (n / 16)
	{
		if (m < 10)
			m += 48;
		else
			m += 55;
		hexxa_process((n / 16), p);
	}
	/* end, prints and counts */
	if (m < 10)
		_putchar(m + '0', p);
	else
		_putchar(m, p);
}

/**
* print_hexxa - supply the value to the print function
* @args: List to get va_arg
* @p: pointer to count variable
*
*/
void print_hexxa(va_list args, int *p)
{
	unsigned int n = va_arg(args, unsigned int);

	hexxa_process(n, p);
}

/**
* hexa_process - prints an int in LOW hexadecimal
* @n: Number to print
* @p: pointer to count variable
*
* Return: void
*/
void hexa_process(unsigned int n, int *p)
{
	unsigned int m;

	m = n % 16;

	/* recursive */
	if (n / 16)
	{
		if (m < 10)
			m += 48;
		else
			m += 87;
		hexa_process((n / 16), p);
	}
	/* end, prints and counts */
	if (m < 10)
		_putchar(m + '0', p);
	else
		_putchar(m, p);
}

/**
* print_hexa - supply the value to the print function
* @args: List to get va_arg
* @p: pointer to count variable
*
*/
void print_hexa(va_list args, int *p)
{
	unsigned int n = va_arg(args, unsigned int);

	hexa_process(n, p);
}

