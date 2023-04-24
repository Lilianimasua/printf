#include "main.h"

int specifier_handler(char, va_list);

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
	char c;
	va_list args_list;

	va_start(args_list, format);

	if (format == NULL)
		return (0);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			specifier = *format;
			bytes_printed
				+=
				specifier_handler(specifier, args_list);
		} else
		{
			/*print the character as is*/
			c = *format;
			write(1, &c, 1);
			bytes_printed++;
		}
		format++;
	}
	va_end(args_list);
	return (bytes_printed);
}

/**
 * specifier_handler - handles the appropriate sepcifier
 * @specifier: The specifier
 * @args_list: The argument list
 * Return: bytes printed;
 */
int specifier_handler(char specifier, va_list args_list)
{
	int bytes_printed = 0;
	char c;

	switch (specifier)
	{
		case '%':
			{
				c = '%';
				write(1, &c, 1);
				bytes_printed++;
				break;
			}
		case 'c':
			{
				/*write logic goes here*/
				bytes_printed += printchar(args_list);
				break;
			}
		case 's':
			{
				/*write logic goes here*/
				bytes_printed += print_string(args_list);
				break;
			}
	}
	return (bytes_printed);
}
