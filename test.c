#include "main.h"
#include <stdio.h>
/**
 * main - test _printf
 * Return: 0
 */
int main(void)
{
	int bytes_returned  = _printf("Hello %s\n", "Akachi!");

	printf("%d\n", bytes_returned);
	return (0);
}
