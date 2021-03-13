#include "holberton.h"

/**
*
*/
int _printf(char *str, ...)
{
	va_list args;

	param params[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
	};
	int i, j, count = 0;
	int *count_p = &count;

	va_start(args, str);

	for (i = 0; str && str[i]; i++)
	{
		/* if current char isn't '%' print normally  */
		if (str[i] != '%')
		{
			_putchar(str[i]);
			*count_p = *count_p + 1;
			continue;
		}
		/* this while will execute if current char is '%'  */
		for (j = 0; j < 4; j++)
		{
			if (*params[j].param[0] == str[i + 1])
				params[j].f(args);
		}
		_putchar(str[i + 1]);
	}
	va_end(args);
}
