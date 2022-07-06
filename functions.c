#include "main.h"

/**
 *
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return(c);
}


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
	int i, slen;

	if (s != NULL)
	{
		slen = _strlen(s);
		i = 0;
		while(*s < slen)
		{
			_putchar(*s);
			s++, i++;
		}
		return(i);
	}
	return(-1);
}
