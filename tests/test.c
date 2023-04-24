#include "main.h"
#include <stdio.h>
/**
 * main - test _printf
 * Return: 0
 */
int main(void)
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("");
	return (0);
}
