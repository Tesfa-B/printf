#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int print_format(char specifiers, va_list ap);
int print_char(int c);
int print_str(char *str);

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
/**
 * print_format - checks the specifier and prints accordingly
 * @specifier: format specifier
 * @ap: elipses
 * Return: if success count
 */
int print_format(char specifier, va_list ap)
{
	int count;

	count = 0;
	if (specifier == 'c')
	{
		count += print_char(va_arg(ap, int));
	}
	else if (specifier == 's')
	{
		count += print_str(va_arg(ap, char *));
	}
	else
	{
		return (write(1, &specifier, 1));
	}
	return (count);
}
/**
 * print_char - prints char
 * @c: char value
 * Return: if success
 */
int print_char(int c)
{
	return (write(1, &c, 1));
}
/**
 * print_str - prints string
 * @str: string literal
 * Return: if success
 */
int print_str(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		print_char((int)*str);
		++count;
		++str;
	}
	return (count);
}
