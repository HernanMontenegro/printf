#include "holberton.h"

/**
* reverse_process - process the printing of a string in reverse
* @str: string to reverse
* @p: pointer to count variable
*
*/

void reverse_process(char *str, int *p)
{
	if (*str)
	{
		reverse_process((str + 1), p);
		_putchar(str[0], p);
	}
	else
		return;
}


/**
* print_reverse - prints the reverse of a string
* @args: list variable that stores the string
* @p: pointer to count variable
*
*/

void print_reverse(va_list args, int *p)
{
	char *str = va_arg(args, char *);

	reverse_process(str, p);
}

/**
* print_rot13 - prints a string in rot13
* @args: list variable that stores the string
* @p: pointer to count variable
* ---------------------------------
* Returns: void
*/

void print_rot13(va_list args, int *p)
{
	char *str = va_arg(args, char *);
	int i, j;

	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (!str)
		*p = -1;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; let[j]; j++)
		{
			if (let[j] == str[i])
			{
				_putchar(str[i], p);
				_putchar(cod[j], p);
				break;
			}
		if (!let[j])
			_putchar(str[i], p);
		}
	}
}
