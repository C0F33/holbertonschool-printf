#include <stdlib>
#include "main.h"
int _printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	While (format != '\0')
		putchar(format);
		format++;
	if (format == '%')
	{
		format = (format + 1)
			if ( format == 'c')
			{
				putchar('format');
			}
	}
	va_end;
	return (0)

}

