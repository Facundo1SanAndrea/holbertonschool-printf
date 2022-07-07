#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int i, count;
	int (*f)(va_list args);
	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		return(-1);
	}
	else
	{
		i = 0, count = 0;
		while(format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					 _putchar('%');
					 i += 2, count++;
					 continue;
				}
				if(format[i + 1] != '\0')
				{
					f = get_op_func(format[i + 1]);
					if (f != NULL)
					{
						count += f(args);
						i += 2;
						continue;
					}
					else
					{
						_putchar('%');
						i++; count++;
						continue;
					}
				}
				if (format[i + 1] == '\0')
				{
					return(count);
				}
			}
			_putchar(format[i]);
			i++, count++;
		}
		if (format[i] == '\0')
		{
			return(count);
		}
	}
	va_end(args);
	return(0);

}
