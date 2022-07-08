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

/**
 * print_d - Prints an integer.
 * @n: The integer to be printed.
 */
int print_d(va_list args)
{
	unsigned int deci, digi, natu;
	int n = va_arg(args, int);
	int count = 0;
	double f = 1;

	if (n == 0)
	{
		_putchar('0');
		return(1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			natu = -n;
			count++;
		}
		else
			natu = n;

		while (f <= natu)
			f = f * 10;

		deci = f / 10;

		while (deci >= 1)
		{
			digi = natu / deci;
			_putchar(digi + '0'), count++;
			natu = (natu - (deci * digi));
			deci = deci / 10;
		}
	}
	return(count);
}
int print_m(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return(1);
}
