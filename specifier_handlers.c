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

/**
 * print_digits - prints digits
 * @args_list: argument list
 * Return: bytes printed
 */
int print_digits(va_list args_list) {
    int n, bytes_printed = 0;
    n = va_arg(args_list, int);
    
    void print_number(unsigned int n) {
        if (n / 10) {
            print_number(n / 10);
        }
        putchar((n % 10) + '0');
    }
    
    unsigned int n1;
    if (n < 0) {
        n1 = -n;
        putchar('-');
        bytes_printed++;
    } else {
        n1 = n;
    }
    
    print_number(n1);
    while (n1 != 0) {
        bytes_printed++;
        n1 /= 10;
    }
    return bytes_printed;
}
