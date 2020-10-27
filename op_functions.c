#include "holberton.h"

/**
 * _putchar - puts char to std output
 * @args: arguements
 * Return: int
 */
int _putchar(va_list args)
{
	char c;

	c = va_arg(args, int);

	(write(1, &c, 1));

	return (1);
}


/**
 * print_string - prints string to std output
 * @args: arguements
 * Return: int
 */
int print_string(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);

	for (i = 0; *s != '\0'; i++)
	{
		(write(1, s, 1));
		s++;
	};

	return (i);
}

/**
 * print_us - puts unsigned int to std output
 * @num: arguments
 * Return: int
 */
void print_us(unsigned int num)
{
	int digit;

	if (num / 10 != 0)
	{
		print_us(num / 10);
	}

	digit = ((num % 10) + '0');

	(write(1, &digit, 1));

}


/**
 * print_integer - determines length of int
 * and calls print_us to print to std output
 * @args: arguments
 * Return: int
 */
int print_integer(va_list args)
{
	char negSign;
	int i, counter;
	int numCopy;

	i = va_arg(args, int);

	numCopy = i;
	counter = 0;

	negSign = '-';

	if (i < 0)
	{
		counter++;
		write(1, &negSign, 1);
		i = -i;
	}

	while (numCopy != 0)
	{
		numCopy = numCopy / 10;
		counter += 1;
	}

	print_us((unsigned int)i);

	return (counter);
}

/**
 * print_char - puts char to std output
 * @c: char argument
 * Return: int
 */

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
