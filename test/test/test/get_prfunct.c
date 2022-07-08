#include "main.h"

/**
 *
 *
 *
 *
 *
 */
int (*get_op_func(char format))(va_list args)
{
	fmt_t opp[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'i', print_d},
		{'%', print_m},
		{'\0', NULL}
	};
	int i;

	i = 0;
	while(opp[i].type != '\0')
	{
		if (opp[i].type == format) /* mandamos format[i+1] */
		{
			return (opp[i].print_type);
		}
		i++;
	}
	return (NULL);
}
