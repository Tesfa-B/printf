#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_format(char specifier, va_list ap);
int print_char(int c);
int print_str(char *str);


#endif
