#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*struct choose_right - choosing the right type
*@type: the type to print
*@func: func of the type to print
*/
typedef struct choose_right
{
	char type;
	int (*func)(va_list arg);
} choose_t;

int _integer(va_list spec);
int checker_spec(char c, va_list liste);
int _print_char(va_list spec);
int _percentage(__attribute__((unused))va_list spec);
int _print_string(va_list spec);
int _putchar(char c);
int _printf(const char *format, ...);
#endif

