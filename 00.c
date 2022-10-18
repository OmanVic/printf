#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * _printf - a function that mimicks printf
 *
 * @format: string to be printed
 *
 * Return: 0
 *
 */
int _printf(const char *format, ...)
{
	va_list print;

	int fun, i = 0;

	va_start(print, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
		}
		if (format[i] == '%')
		{
			_putchar("%");
		}
		else if (format[i] == 'c')
		{
			_putchar(va_arg(print, int));
		}
		else if (format[i] == 's')
		{
			while (fun[i] != NULL)
			{
				_putchar('fun[i]');
				i++;
			}
		}
		i++;
	}
	va_end(print);
	return (i);
}
