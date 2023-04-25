#include "main.h"
/**
 * _printf - prints a specified format
 * to standard output
 * @format: the specified format
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	int bytes_printed = 0;
	char specifier;
	va_list args, args_list;

	va_start(args, format);
	va_copy(args_list, args);

	if (format == NULL || *format == '\0')
		return (0);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			specifier = *format;
			if (specifier == '%')
			{
				_putchar(specifier);
				bytes_printed++;
			} else
				bytes_printed += handler(specifier, args_list);
		} else
		{
			_putchar(*(format));
			bytes_printed++;
		}
		format++;
	}
	va_end(args);
	va_end(args_list);
	return (bytes_printed);
}
