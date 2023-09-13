#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add two intergers
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract two intergers
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply two intergers
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide two intergers
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - get modulo of two intergers
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
