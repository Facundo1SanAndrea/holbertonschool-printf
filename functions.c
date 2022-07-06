#include "main.h"

/**
 *
 *
 */
int print_c(va_list args)
{
	char argu = va_arg(args, int);

	_putchar(argu);

	return (1);
}
/**
 *
 *
 *
 */
int print_s(va_list args)
{
	char *s = va_arg(args, char *);
	int count;

	if (s != NULL)
	{
		count = 0;
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
			count++;
		}
		return (count);
	}
	return(0);
}
