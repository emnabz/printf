#include "holberton.h"
/**
 * _print_char - print charachter
 * @spec: specifiers
 * Return: int
 */
int _print_char(va_list spec)
{
_putchar(va_arg(spec, int));
return (1);
}
