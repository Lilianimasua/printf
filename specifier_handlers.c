#include "main.h"

/**
 * handler - handles the specifier
 * @c: specifier
 * @args_list: argument_list
 * Return: Number of bytes printed
 */
int handler(char c, va_list args_list)
{
	int bytes_printed = 0;

	switch (c)
	{
		case 's':
			{
				bytes_printed += print_string(args_list);
				break;
			}
		case 'd':
		case 'i':
			{
				bytes_printed += print_integer(args_list);
				break;
			}
		case 'c':
			{
				bytes_printed += print_char(args_list);
				break;
			}
		default:
			{
				_putchar('%');
				_putchar(c);
				bytes_printed += 2;
			}
	}
	return (bytes_printed);
}
/**
 * print_char - prints a character
 * @args_list: argument list
 * Return: number of bytes_written
 */
int print_char(va_list args_list)
{
	int bytes_written = 0;
	char c = va_arg(args_list, int);

	if (c == '\0')
		return (0);
	_putchar(c);
	bytes_written++;
	return (bytes_written);
}

/**
 * print_string - prints string to about
 * @args_list: the string to print
 * Return: The number of bytes printed
 *
 */
int print_string(va_list args_list)
{
	char *str = va_arg(args_list, char*);
	int len;
	int bytes_written = 0, i;
	char *str_buffer;

	if (str == NULL || *str == '\0')
		return (0);

	len = _strlen(str);

	str_buffer = malloc((len + 1) * sizeof(char));

	if (str_buffer == NULL)
		return (0);
	for (i = 0; i < len; i++)
	{
		str_buffer[i] = str[i];
	}
	str_buffer[i] = '\0';

	for (i = 0; i < len; i++)
	{
		_putchar(str_buffer[i]);
		bytes_written++;
	}
	free(str_buffer);
	return (bytes_written);
}

/**
 * print_integer - prints an integer to stddout
 * @args_list: the integer to print
 * Return: The number of bytes printed
 */
int print_integer(va_list args_list)
{
	int num = va_arg(args_list, int);
	int sign  = num < 0 ? -1 : 1;
	int bytes_written = 0;
	char *int_buffer;
	int i = 0, j, buffer_size = 64;
	unsigned int u_num = sign * num;

	int_buffer = malloc(buffer_size * sizeof(char));

	if (int_buffer == NULL)
		return (0);

	do {
		int_buffer[i++] = (u_num % 10) + '0';
	} while ((u_num /= 10) > 0);
	if (sign < 0)
		int_buffer[i++] = '-';
	int_buffer[i] = '\0';

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(int_buffer[j]);
		bytes_written++;
	}
	free(int_buffer);
	return (bytes_written);
}
