#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int print_string(va_list);
int printchar(va_list);
#endif
