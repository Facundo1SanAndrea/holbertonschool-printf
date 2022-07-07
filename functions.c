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
	int i;

	if (s == NULL)
	{
		s = "(null)";
	}
	i = 0;
	while(*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	return(i);
}
