#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 64

int _printf(const char *format, ...);
int _putchar(char c);

/*SPECIFIER PROTOTYPES*/
int print_integer(int);
int print_string(char*);

/*STRING UTILITY PROTOTYPES*/
int _strlen(char*);

/*MEMORY UTILITY PROTOTYPE*/
#endif
