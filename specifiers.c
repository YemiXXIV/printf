#include "main.h"

/**
 * cf - A function to print char
 * @arg: argument passed
 *
 * Return: 0 if successful
 */

int cf(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);

	return (1);
}

/**
 *sf - A function to print string
 *@arg: argument passed
 *
 * Return: Number of characters in the string
 */

int sf(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(NULL)";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * pf - A function to print percentage
 * @arg: argument passed
 *
 * Return: 0 if successful
 */

int pf(va_list arg __attribute__((unused)))
{
	_putchar('%');

	return (1);
}
