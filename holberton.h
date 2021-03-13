#ifndef HEADER_H
#define HEADER_H

/* Libraries to use  */
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/* Struct definition named param_manager, type: param  */
typedef struct param_manager
{
	char *param;
	void (*f)(va_list args, );
} param;

/* Prototypes  */
int _putchar(char c);
int _printf(char *str, ...);
void print_char(va_list args, int *count_p);
void print_int(va_list args, int *count_p);
void print_str(va_list args, int *count_p);


#endif /* HEADER_H */
