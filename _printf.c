#include "holberton.h"

/**
* print_proccesor - manages the print capacity in general
* @str: the string input in _printf
* @p_len: the size of our struct of specifiers
* @cnt_p: pointer to keep track of characters amount
* @ps: struct of specifiers and functions
* @lst: list of arguments given in _printf
* ----------------------------------------------------------
* Return: void
*/
int print_proccesor(char *str, int p_len, int *cnt_p, param ps[], va_list lst)
{
	int i, j;

	for (i = 0; str && str[i]; i++)
	{
		/* If current char isn't '%' print normally  */
		if (str[i] != '%')
		{
			_putchar(str[i]);
			*cnt_p = *cnt_p + 1;
			continue;
		}

		if (!str[i + 1])
			return (-1);

		/* This for will execute if current char is '%'  */
		for (j = 0; j < p_len; j++)
		{
			/* Checks if param is valid */
			if (*ps[j].param == str[i + 1])
			{
				ps[j].f(lst, cnt_p);
				i++;
				break;
			}
		}
		/* If param isn't valid, prints next character an continue*/
		if (j == p_len)
		{
			_putchar(str[i + 1]);
			*cnt_p = *cnt_p + 1;
			i++;
		}
	}
	return (*cnt_p);
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
	};
	int count = 0, params_length;
	int *count_p = &count;

	va_start(args, str);

	/* Checks if str given is NULL  */
	if (!str)
		return (-1);

	/* Automatic check of params array length  */
	params_length = sizeof(params) / sizeof(params[0]);

	count = print_proccesor(str, params_length, count_p, params, args);

	va_end(args);

	return (count);
}
