#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked -fn  Allocates memory
  * @b: the size to allocate as var
  *
  * Return: Nothing to return.
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
