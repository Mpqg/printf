#include "main.h"
#include <stdlib.h>

/**
 * count_digits - digits count
 * @i: integer
 * Return: int
 */
int count_digits(int i)
{
	int count = 0;
	int num;

	if (i < 0)
		num = i * -1;
	else
		num = i;

	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

/**
 * print_number - print integer
 * @n: integer
 */
void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

/**
 * print_int - print an integer
 *
 * @arguments: integer
 * Return: Always 0
 */

int print_int(va_list arguments)
{
	int num = va_arg(arguments, int);
	int count = count_digits(num);

	print_number(num);

	return (count);
}

/**
 * print_unsigned - print an unsigned integer
 *
 * @arguments: integer
 * Return: Always 0
 */
int print_unsigned(va_list arguments)
{
	unsigned int num = va_arg(arguments, unsigned int);
	char *str = string_to_base(num, 10);

	return (_puts(str));
}
