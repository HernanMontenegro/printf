#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

#typedef struct param_manager
{
	char *param;
	void (*f)(va_list args);
} param;


#endif
