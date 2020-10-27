#include "holberton.h"

/**
 *_printf - print output considering the format.
 *@format: format of output
 *Return: int
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0, i = 0;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count++;
			while (format[i + 1] == ' ')
				i++;
			if (format[i] == '\0')
				return (-1);
			count += checker_spec(format[i + 1], arg) - 1;
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(arg);
	return (count);
}
