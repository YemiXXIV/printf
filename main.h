#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - structure to print the data
 * @c: character
 * @pr_f: pointer to the function
 */

typedef struct print
{
	char *c;
	int (*pr_f)(va_list arg);
} print_f;

int _printf(const char *format, ...);
int _putchar(char c);
int cf(va_list arg);
int sf(va_list arg);
int pf(va_list arg __attribute((unused)));
int df(va_list arg);
int print_s(long int i, long int n);
#endif
