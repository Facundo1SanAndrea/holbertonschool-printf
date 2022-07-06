#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;	

	if (format == NULL)
	{
		return(0);
	}
	else
	{
		i = 0;
		while(format[i] != '\0')
		{
			if (format[i] == '%')
			{
				_putchar('F');
				_putchar('\n');
			}
			_putchar(format[i]);
			i++;
		}
	}
	return(0);

}
