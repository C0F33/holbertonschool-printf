#include "main.h"
/**
 * funct_print- Function that prints the opts
 * @format: The string to be printed
 * @ap: Arguments
 * Return: Number of chars to be printed
*/
int funct_print(va_list ap, char format)
{
	int count = 0;

	if (format == 's')
	{
		char *s = va_arg(ap, char *);

		while (*s != '\0')
		{
			_putchar(*s);
			s++;
			count++;
		}
	}
	else if (format == 'c')
	{
		char c = va_arg(ap, int);

		_putchar(c);
		count++;
	}
	else if (format == '%')
	{
		_putchar('%');
		count++;
	}
	else if (format == 'i')
	{
		count += print_int(va_arg(ap, int));
	}
	else if (format == 'd')
	{
		count += print_int(va_arg(ap, int));
	}
	else
	{
		_putchar(format);
		count++;
	}
	return (count);
}
