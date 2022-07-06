#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int (*get_op_func(char *format)(va_list args));

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
