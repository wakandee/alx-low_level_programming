#include "main.h"

/**
  * set_string - fn that Sets the value of a pointer to char
  *
  * @s: var holding the value to modify
  * @to: vr holding  the value to assign
  *
  * Return: Nothing.
  */
void set_string(char **s, char *to)
{
	*s = to;
}
