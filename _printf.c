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
		while(format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			count++;
		}
		printf("%d\n", count);
		return(count);
	}
	return(count);

}
