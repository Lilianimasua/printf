#include "main.h"
/**
 * _strlen - gets the lenght of a string
 * @str: pointer to string
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size in bytes of the aloocated mem for ptr
 * @new_size: The size in bytes of the new mem bloc
 * Return: pointer to new mem allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, end;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL && new_size != 0)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	if (new_size > old_size)
		end = old_size;
	else
		end = new_size;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < end; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);

}

/**
 * to_base_n - changes a number to a specific base
 * @num: the number to convert
 * @base: the base to convert to
 * @buffer: The character that will hold the resulting string
 * Return: the number of characters printed
 */
int to_base_n(unsigned long num, int base, char buffer[])
{
	int i = 0, rem, bytes_written = 0, j;
	char hex_case = (buffer[0] == 'A') ? 'A' : 'a';

	(num == 0) && (buffer[i++] = '0');
	while (num > 0)
	{
		rem = num % base;

		if (rem < 10)
			buffer[i++] = rem + '0';
		else
			buffer[i++] = rem - 10 + hex_case;
		num /= base;
	}
	buffer[i] = '\0';
	for (j = i - 1; j >= 0; j--)
	{
		bytes_written += _putchar(buffer[j]);
	}
	return (bytes_written);
}
