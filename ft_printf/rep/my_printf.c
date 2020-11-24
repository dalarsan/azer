
#include <stdio.h>
#include <stdarg.h>
#include "print.h"

int my_param(char *str, va_list ap, int index)
{
	char *arg;

	arg = get_param(str, index);
	if (manage_param(arg, ap) == 1)
		index += my_strlen(arg) - 1;
	else
		my_putchar(str[index]);
	return (index);
}

void my_printf(char *str, ...)
{
	va_list ap;
	int i = 0;

	my_print_dictionary();
	va_start(ap, str);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == '%')
			i = my_param(str, ap, i);
		else
			my_putchar(str[i]);
	va_end(ap);
}

void my_print_dictionary(void)
{
	print_entries[(int)('s')] = my_print_1;
	print_entries[(int)('c')] = my_print_2;
	print_entries[(int)('S')] = my_print_3;
	print_entries[(int)('o')] = my_print_4;
	print_entries[(int)('e')] = my_print_5;
	print_entries[(int)('E')] = my_print_5;
	print_entries[(int)('f')] = my_print_6;
	print_entries[(int)('F')] = my_print_6;
	print_entries[(int)('b')] = my_print_7;
	print_entries[(int)('B')] = my_print_7;
	print_entries[(int)('p')] = my_print_8;
	print_entries[(int)('P')] = my_print_8;
	print_entries[(int)('x')] = my_print_9;
	print_entries[(int)('X')] = my_print_9;
	print_entries[(int)('d')] = my_print_10;
	print_entries[(int)('i')] = my_print_10;
	print_entries[(int)('u')] = my_print_10;
	print_entries[(int)('%')] = my_print_11;
}