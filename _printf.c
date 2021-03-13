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
	int i = 0, j = 0, count = 0;
	int *count_p = &count;

	va_start(args, str);

	while (str && str[i])
	{
		/* if current char isn't '%' print normally  */
		if (str[i] != '%')
		{
			_putchar(str[i]);
			*count_p = *count_p + 1;
			i++;
			continue;
		}
		/* this while will execute if current char is '%'  */
		while (j < 4)
		{
			if (*params[j].param[0] == str[i + 1])
				params[j].f(args);
			j++;
		}
		_putchar(str[i + 1]);

		j = 0;
		i++;
	}
	va_end(args);
}
