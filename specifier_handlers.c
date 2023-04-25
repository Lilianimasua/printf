#include "main.h"

/**
 * print_string - prints string to about
 * @str: the string to print
 * Return: The number of bytes printed
 *
 */
int print_string(const char *str)
{
	int len = _strlen(str);
	int bytes_written = 0;
	
	for (int i = 0; i < len; i++)
	{
		_putchar(str[i]);
		bytes_written++;
	}
	return (bytes_written);
}

/**
 * print_integer - prints an integer to stddout
 * @num: the integer to print
 * Return: The number of bytes printed
 */
int print_integer(int num)
{
	int sign  = num < 0 ? -1 : 1;
	int bytes_written = 0;
	char *int_buffer;
	int i = 0, j;
	unsigned int u_num = sign * num;

	int_buffer = malloc(BUFFER_SIZE * sizeof(char));

	if (int_buffer == NULL)
		return(-1);

	do {
		int_buffer[i++] = (u_num % 10) + '0';

		if (i == BUFFER_SIZE)
		{
			BUFFER_SIZE *= 2;
			int_buffer = _realloc(in_buffer, BUFFER_SIZE*sizeof(char));

			if (int_buffer == NULL)
			{
				free(int_buffer);
				return (-1);
			}
		}
	} while ((u_num /= 10) > 0);

	if (sign < 0)
		int_buffer[i++] = '-';
	int_buffer[i] = '\0';

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(int_buffer[j]);
		bytes_written++;
	}
	return (bytes_written);
}
