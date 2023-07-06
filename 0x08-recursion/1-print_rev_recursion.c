#include "main.h"
/**
  * _print_rev_recursion -fn to  Print a string in reverse
  * @s: the variable string to reverse
  *
  * Return: Nothing.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
