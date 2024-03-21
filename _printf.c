#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - Function that prints any argument to stdout
 * @format: the format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list ap;
    int count = 0;

    va_start(ap, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            count += funct_print(ap, *format);
        }
        else
        {
            _putchar(*format);
            count++;
        }
        format++;
    }

    va_end(ap);
    return (count);
}
