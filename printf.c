#include "main.h"
/**
 * _printf - prints a specified format
 * to standard output
 * @format: the specified format
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	int printed = 0;
	va_list args, args_list;
	int (*pfn)(va_list);

	va_start(args, format);
	va_copy(args_list, args);

	if (format == NULL || *format == '\0')
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			pfn = get_print(format);
			printed +=
				pfn ? pfn(args_list) : _putchar ('%') +
				_putchar(*format);
		} else
		{
			printed += _putchar(*(format));
		}
		format++;
	}
	va_end(args);
	va_end(args_list);
	return (printed);
}
