#include "main.h"

/**
 * vure_putchar - print a character
 * @c: character input
 * Return: 1
 */
int vure_putchar(char c)
{
	return (write(1, &c, 1));
}
