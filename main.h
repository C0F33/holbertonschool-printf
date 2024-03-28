#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _putchar(char c);
int print_int(int i);
int funct_print(va_list ap, char format);
int _printf(const char *format, ...);
int write(int i, char *buf, int len);
int other_funcs(va_list ap, char format);
int prints(char *s);

#endif
