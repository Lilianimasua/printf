#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is is returned, and errno is  set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints  char string to stdout
 * @s: pointer to string
 * Return: The number of characters printed
 */
int _puts(char *s)
{
	int i = 0;

	if (s == NULL)
		return (-1);
	for (; s[i]; i++)
		_putchar(s[i]);
	/* i is the number of bytes printed */
	return (i);
}
