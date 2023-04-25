#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);

/*SPECIFIER PROTOTYPES*/
int print_integer(va_list);
int print_string(va_list);
int print_char(va_list);

/*SPECIFIER HANDLER*/
int handler(char, va_list);

/*STRING UTILITY PROTOTYPES*/
int _strlen(char*);

/*MEMORY UTILITY PROTOTYPE*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
