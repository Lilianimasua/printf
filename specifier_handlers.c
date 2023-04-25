#include "main.h"

int print_number(int);
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
		_putchar(s[i]);
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

	_putchar(c);
	bytes_written++;
	return (bytes_written);
}

/**
 * print_digits - prints digits
 * @args_list: argument list
 * Return: bytes printed
 */
int print_digits(va_list args_list)
{
	int n = va_arg(args_list, int);
	int bytes_printed = print_number(n);

	return (bytes_printed);
}

/**
 * print_number - recursively prints the number
 * @n: the number to be printed
 * Return: The bytes printed
 */
int print_number(int n)
{
	int bytes_printed = 0;
	int m;

	if (n == 0)
	{
		n = n + '0';
		_putchar(n);
		bytes_printed++;
	}
	if (n < 0)
	{
		m = -n;
		_putchar('-');
		bytes_printed++;
	}
	else
		m = n;

	if (m / 10)
		print_number(m / 10);
	m = (m % 10) + '0';
	_putchar(m);
	bytes_printed++;
	return (bytes_printed);
}
