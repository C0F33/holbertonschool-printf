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
	else if (format == 'i' || format == 'd')
	{
		count += print_int(va_arg(ap, int));
	}
	else
	{
		_putchar('%');
		_putchar(format);
		count += 2;
	}
	return (count);
}



/**
 * print_int - Prints the integer
 * @i: Number to be printed
 * Return: Count of all numbers printed
 */

int print_int(int i)
{
	int count = 1;
	unsigned int num = 0;

	if (i < 0)
	{
		_putchar('-');
		count++;
		num = i * -1;
	}
	else
	{
		num = i;
	}
	if (num / 10)
	{
		count += print_int(num / 10);
	}
	_putchar((num % 10) + 48);

	return (count);
}



/**
 * _putchar - Function that writes the character c to stdout
 * @c: The character to print
 * Return: On success 1,
 * On error -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
