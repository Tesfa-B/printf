#include <stdio.h>
#include "main.h"
/**
 *  * print_format - checks the specifier and prints accordingly
 *   * @specifier: format specifier
 *    * @ap: elipses
 *     * Return: if success count
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
