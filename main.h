#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct format_t - struct
 *
 * @type: The types of arguments passed to the function
 * @type_func: The function that performs acording
 * to the actual argument passed
 */

typedef struct format_t
{
	char type;
	void (*print_type(char *format))(va_list args);
} fmt_t;


#endif
