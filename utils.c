#include "main.h"
/**
 * _strlen - gets the lenght of a string
 * @str: pointer to string
 * Return: length of string
 */
int to_base_n(unsigned long num, int base, char buffer[])
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL || *str == '\0')
		return (0);
	while (str[len] != '\0')
	{
		len++;
	}
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
