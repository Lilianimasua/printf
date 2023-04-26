#include "main.h"
/**
 * get_print - func to return a pointer to the appropriate print func.
 * @specifier: format of the argument to be printed
 * Return: pointer to the appropriate print func, OR NULL if no match is found.
 */
int (*get_print(const char *specifier))(va_list)
{
	int i = 0;
	fmt_t fmt_types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{"d", print_integer},
		{"i", print_integer},
		/*{'u', print_unsigned},*/
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"p", print_addrs},
		/*{'S', print_STR},*/
		/*{'r', print_rev},*/
		{NULL, NULL}};

	for (; fmt_types[i].spec; i++)
	{
		if (*specifier == *(fmt_types[i].spec))
		{
			return (fmt_types[i].func);
		}
	}
	return (NULL);
}
