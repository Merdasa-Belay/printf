#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */

/* _printf */
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);



#endif
