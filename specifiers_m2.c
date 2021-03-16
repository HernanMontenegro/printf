#include "holberton.h"

/**
* print_percent - prints a percent
* @args: List to get va_arg
* @p: pointer to count
*
*/
void print_percent(__attribute__((unused)) va_list args, int *p)
{
        _putchar('%', p);
}
