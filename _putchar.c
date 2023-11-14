#include "main.h"

/**
 * _putchar - A function that writes the character c to stdout
 * @c: Character to print
 *
 * Return: 0 on success.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
