#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - prints any argument to stdout
 * @format: the format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == 's')
            {
                char *s = va_arg(ap, char *);
                while (*s != '\0')
                {
                    putchar(*s);
                    s++;
                    i++;
                }
            }
            else if (*format == 'c')
            {
                char c = va_arg(ap, int);
                putchar(c);
                i++;
            }
            else if (*format == '%')
            {
                putchar('%');
                i++;
            }
        }
        else
        {
            putchar(*format);
            i++;
        }
        format++;
    }

    va_end(ap);
    return (i);
}
