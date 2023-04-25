#include "main.h"
#include <stdio.h>
/**
 * _printf - prints a specified format
 * to standard output
 * @format: the specified format
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	int bytes_printed = 0, i = 0;
	char specifier;
	va_list args, args_list;

	va_start(args, format);
	va_copy(args_list, args);

	if (format == NULL || *format == '\0')
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i += 1;
			specifier = format[i];
			bytes_printed += handler(specifier, args_list);
		} else
		{
			_putchar(format[i]);
			bytes_printed++;
		}
		i++;
	}
	va_end(args);
	va_end(args_list);
	return (bytes_printed);
}
