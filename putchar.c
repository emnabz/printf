#include <unistd.h>

/**
 * _putchar - write  character c to stdout
 * @c: The character to print
 *
 * Return, 1.
 * On error, -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
