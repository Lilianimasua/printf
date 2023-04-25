#include "main.h"
/**
 * _strlen - gets the lenght of a string
 * @str: pointer to string
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL || *str == '\0')
		return(-1);
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
