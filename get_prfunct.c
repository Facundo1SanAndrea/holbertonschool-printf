#include "main.h"
#include<stdeff.h>
/**
 *
 *
 *
 *
 *
 */
int (*get_op_func(char *format)(va_list))
{
	fmt_t opp[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_mod},
		{'\0', NULL}
	};
	int i;

	i = 0;
	while(opp[i].type != '\0')
	{
	if (opp[i].type == *format)
	{
		return (opp[i].print_type(va_list));
	}
	i++;
	}
	return (NULL);
