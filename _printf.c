#include "holberton.h"

/**
* valid_spc - manage the % situation
* @str: the string given
* @i: current index
* @p_len: specifiers array length
* @cnt_p: keep count of characters printed
* @ps: specifiers struct
* @lst: the args list
* -----------------------------------
* Return: the index after proccess
*/
int valid_spc(char *str, int i, int p_len, int *cnt_p, param ps[], va_list lst)
{
	int j;

	for (; str[i + 1] == ' '; i++)
	{
	}

	if (!str[i + 1])
		return (-1);

	for (j = 0; j < p_len; j++)
	{
		if (*ps[j].param == str[i + 1])
		{
			if (str[i] == ' ' && str[i + 1] != '%')
				_putchar(' ', cnt_p);
			ps[j].f(lst, cnt_p);
			i++;
			return (i);
		}
	}

	if (j == p_len)
	{
		_putchar('%', cnt_p);
		if (str[i] == ' ')
			_putchar(' ', cnt_p);
		_putchar(str[i + 1], cnt_p);
		i++;
	}

	return (i);
}

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
	int i;

	for (i = 0; str && str[i]; i++)
	{
		if (str[i] != '%')
		{
			_putchar(str[i], cnt_p);
			continue;
		}
		if (!str[i + 1])
			return (-1);

		i = valid_spc(str, i, p_len, cnt_p, ps, lst);
		if (i == -1)
			return (i);
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
		{"%", print_percent},
		{"b", print_binary},
		{"u", print_u_int},
		{"o", print_octal},
		{"X", print_hexxa},
		{"x", print_hexa},
		{"r", print_reverse},
		{"R", print_rot13},
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
