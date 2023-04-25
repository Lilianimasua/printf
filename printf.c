#include "main.h"
/**
 * _printf - prints a specified format
 * to standard output
 * @format: the specified format
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	const char *fptr = format, str;
	int bytes_printed = 0, num;
	char specifier, c;
	va_list args;

	va_start(args, fptr);

	if (fptr == NULL || *fptr == '\0')
		return (0);
	while (*fptr != '\0')
	{
		if (*fptr == '%')
		{
			ftpr++;
			specifier = *fptr;
			if (specifier == 's')
			{
				str = va_arg(args, char*);
				bytes_printed += print_string(str);
			}
			else if (specifier == 'd' || specifier == 'i')
			{
				num = va_arg(args, int);
				bytes_printed += print_integer(num);
			}
			else if (specifier == 'c')
			{
				c = va_arg(args, char);
				_putchar(c);
				bytes_printed++;
			}
			else if (specifier == '%')
			{
				_putchar('%');
				bytes_printed++;
			}
			else
				break;
		}
		else
		{
			_putchar(*ftpr);
			bytes_printed++;
		}
		ftpr++;
	}
	va_end(args);
	return (bytes_written);
}
