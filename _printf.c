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
    va_list args;
    int written_chars = 0;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == 's')
            {
                char *s = va_arg(args, char *);
                while (*s != '\0')
                {
                    putchar(*s);
                    s++;
                    written_chars++;
                }
            }
            else if (*format == '%')
            {
                putchar('%');
                written_chars++;
            }
        }
        else
        {
            putchar(*format);
            written_chars++;
        }
        format++;
    }

    va_end(args);
    return written_chars;
}
