#include "main.h"

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
