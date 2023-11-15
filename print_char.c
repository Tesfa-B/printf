#include "main.h"
#include <stdio.h>
/**
 *  * print_char - prints char
 *   * @c: char value
 *    * Return: if success
 */
int print_char(int c)
{
	return (write(1, &c, 1));
}
