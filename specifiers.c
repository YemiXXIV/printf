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

/**
 * df - A function to print integer values
 *@arg: argument passed
 *
 * Return: Lenght of the integer
 */

int df(va_list arg)
{
	long int i = va_arg(arg, int);
	long int k;

	k = print_s(i, 0);

	return (k);
}

/**
 * print_s - A function to print signed integers
 * @i: The integer to be printed
 * @n: length of integer
 */

int print_s(long int i, long int n)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
		n++;
	}
	if (i / 10)
	{
		n = print_s(i / 10, n++);
	}
	_putchar(i % 10 + '0');
	n++;

	return (n);

}
