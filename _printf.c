#include "main.h"

/**
 * _printf - A function that miimcs the printf function
 * from the standard library
 * @format: String to be printed.
 *
 * Return: 0 if successful.
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int k, l, n_char = 0;
	print_f data[] = {
		{"c", cf}, {"s", sf}, {"%", pf}, {"d", df}, {"i", df}
	};
	va_start(arg, format);
	if (!format)
		return (-1);
	for (k = 0; format[k]; k++)
	{
		if (format[k] != '%')
		{
			_putchar(format[k]);
			n_char++;
		}
		else
		{
			if (!format[k + 1] || format[k + 1] == ' ')
				return (-1);
			for (l = 0; l < 8; l++)
			{
				if (format[k + 1] == *(data[l].c))
					break;
			}
			if (l < 8)
			{
				n_char = n_char + data[l].pr_f(arg);
				k++;
			}
			else
			{
				_putchar(format[k]);
				n_char++;
			}
		}
	}
	va_end(arg);
	return (n_char);
}
