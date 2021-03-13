#include "holberton.h"

/**
* _printf: the giant printf programmed by 2 guys very hard!!
* @str: basic string parameter
* @...: the unknown amount of parameters representation
* -------------------------------------------
* Return: amount of characters printed, -1 if fails
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

        if (!str)
                return (-1);

	for (i = 0; str && str[i]; i++)
	{
		/* if current char isn't '%' print normally  */
		if (str[i] != '%')
		{
			_putchar(str[i]);
			*count_p = *count_p + 1;
			continue;
		}
		/* this for will execute if current char is '%'  */
		for (j = 0; j < 4; j++)
		{
			if (*params[j].param == str[i + 1])
				params[j].f(args);
		}
		_putchar(str[i + 1]);
	}
	va_end(args);

        return (count);
}
