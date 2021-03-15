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
	void (*f)(va_list args, int *count_p);
} param;

/* Prototypes  */

int _putchar(char c);
int _printf(char *str, ...);

void print_char(va_list, int *);
void print_int(va_list, int *);
void int_process(int, int *);
void print_unsigned_int(va_list, int *);
void unsigned_int_process(unsigned int, int *);
void print_octal_int(va_list, int *);
void octal_int_process(unsigned int, int *);
void str_process(char *, int *);
void print_str(va_list, int *);

#endif /* HEADER_H */
