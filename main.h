#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>

/**
 * struct format_t - struct
 *
 * @type: The types of arguments passed to the function
 * @print_type: The function that performs acording
 * to the actual argument passed
 */

typedef struct format_t
{
	char type;
	int (*print_type)(va_list args);
} fmt_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int (*get_op_func(char format))(va_list args);
void shortcut(char iplus1);
int print_d(va_list args);
int print_m(va_list args);

#endif
