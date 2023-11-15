#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - prints char and strings
 * @format: format specifier
 * Return: if success
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	va_start(ap, format);

	while (*format != '\0')
	{
		count = 0;
		if (*format == '%')
		{
			count += print_format(*(++format), ap);
		}
		else
		{
			count += write(1, format, 1);
			++format;
		}
	}
	va_end(ap);
	return (count);
}
