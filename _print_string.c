#include "holberton.h"
/**
 * _print_string - Prints a string.
 * @spec: specifiers list.
 *
 */
int _print_string(va_list spec)
{
int i;
char *pnt;

pnt = va_arg(spec, char *);
if (pnt == NULL)
pnt = "(null)";
for (i = 0; pnt[i] != '\0'; i++)
_putchar(pnt[i]);
return (i);
}
