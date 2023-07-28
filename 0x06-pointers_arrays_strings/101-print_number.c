#include "main.h"

/**
 * print_number_recursive - prints an integer recursively.
 * @n: input integer.
 * Return: no return.
 */
void print_number_recursive(unsigned int n)
{
	if (n >= 10)
	{
		print_number_recursive(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number_recursive(-n);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_number_recursive(n);
	}
}

