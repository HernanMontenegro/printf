#include "holberton.h"



void _print_proccesor(char *str, int params_lenght, int *count_p, param params[], va_list args)
{
	for (i = 0; str && str[i]; i++)
	{
		/* If current char isn't '%' print normally  */
		if (str[i] != '%')
		{
			_putchar(str[i]);
			*count_p = *count_p + 1;
			continue;
		}
		/* This for will execute if current char is '%'  */
		for (j = 0; j < params_length; j++)
		{
			/* Checks if param is valid */
			if (*params[j].param == str[i + 1])
			{
				params[j].f(args, count_p);
				i++;
				break;
			}
		}
		/* If param isn't valid, prints next character and continues */
		if (j == params_length)
		{
			_putchar(str[i + 1]);
			*count_p = *count_p + 1;
			i++;
		}
	}	
}

/**
* _printf - The giant printf programmed by 2 guys very hard!!
* @str: Basic string parameter
* @...: The unknown amount of parameters representation
* -------------------------------------------
* Return: Amount of characters printed, -1 if fails
*/
int _printf(char *str, ...)
{
	va_list args;

	param params[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned_int},
		{"o", print_octal_int},
	};
	int i, j, count = 0, params_length;
	int *count_p = &count;

	va_start(args, str);

	/* Checks if str given is NULL  */
	if (!str)
		return (-1);

	/* Automatic check of params array length  */
	params_length = sizeof(params) / sizeof(params[0]);

	_print_proccesor(str, params_lenght, count_p, params, args);

	va_end(args);

	return (count);
}
