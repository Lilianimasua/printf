#include "main.h"

/**
 * print_string - prints a char pointer
 * @args_list: argument list
 * Return: bytes printed
 */
int print_string(va_list args_list)
{
	int i, bytes_printed = 0;

	char *s = va_arg(args_list, char*);

	for (i = 0; s[i]; i++)
	{
		write(1, &s[i], 1);
		bytes_printed++;
	}
	return (bytes_printed);
}

/**
 * printchar - prints a character
 * @args_list: argument lists
 * Return: bytes printed;
 */
int printchar(va_list args_list)
{
	int bytes_written = 0;

	char c = (char)va_arg(args_list, int);

	write(1, &c, 1);
	bytes_written++;
	return (bytes_written);
}
