#ifndef HEADER_H
#define HEADER_H

/* Libraries to use  */
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/* Struct definition named param_manager, type: param  */
#typedef struct param_manager
{
	char *param;
	void (*f)(va_list args);
} param;

/* Prototypes  */
int _printf(char *str, ...);
void print_int(int n, int *count_p);
void print_str(char *str, int *count_p);


#endif /* HEADER_H */
