#include "main.h"
/**
 *  * print_str - prints string
 *   * @str: string literal
 *    * Return: if success
  */
int print_str(char *str)
{
	int count = 0;

	while (*str != '0')
	{
		print_char((int)*str);
		++count;
		++str;
	}
	return (count);
}
