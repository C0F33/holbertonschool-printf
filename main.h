#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int print_int(int i);
int funct_print(va_list ap, int *format);
int _printf(const char *format, ...);

#endif
