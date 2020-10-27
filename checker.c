#include "holberton.h"
/**
*checker_spec - checks the specifier
*@c: character of selection
*@arg: liste of selection
*Return: number of printing
*/
int checker_spec(char c, va_list arg)
{
	choose_t a[] = {
	{'c', _print_char},
	{'s', _print_string},
	{'%', _percentage},
	{'d', _integer},
	{'i', _integer},
	{'0', NULL}
	};
	int i = 0, count = 0;

	while (i < 6)
	{
		if (c == (a[i].type))
		{
			count += a[i].func(arg);
			return (count);
		}
		i++;
	}
	return (-1);
}
