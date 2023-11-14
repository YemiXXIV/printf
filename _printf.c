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
	int i, j, n_char = 0;
	print_f data[] = {
		{"c", cf}, {"s", sf}, {"%", pf}
	};
	va_start(arg, format);
	if (!format)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_char++;
		}
		else
		{
			if (!format[i + 1] || format[i + 1] == ' ')
				return (-1);
			for (j = 0; j < 8; j++)
			{
				if (format[i + 1] == *(data[j].c))
					break;
			}
			if (j < 8)
			{
				n_char = n_char + data[j].pr_f(arg);
				i++;
			}
			else
			{
				_putchar(format[i]);
				n_char++;
			}
		}
	}
	va_end(arg);
	return (n_char);
}
