#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct fmt_t - Struct for handling format
 * @spec: specifier
 * @func: Function pointer to specifier handler
 */
typedef struct fmt
{
	char *spec;
	int (*func)(va_list);
} fmt_t;

/*PRINT PROTOTYPES */
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *);

/*SPECIFIER PROTOTYPES*/
int print_integer(va_list);
int print_string(va_list);
int print_char(va_list);
int print_perc(va_list);

/*STRING UTILITY PROTOTYPES*/
int _strlen(char*);

/*MEMORY UTILITY PROTOTYPE*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/*BASE CONVERSION PROTOTYPE*/
int to_base_n(unsigned long, int, char[]);

/*BASE UTILITY PROTOTYPES*/
int print_binary(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_addrs(va_list);

/*Pointer to function of struct*/
int (*get_print(const char*))(va_list);

#endif
