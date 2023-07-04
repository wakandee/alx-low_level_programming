#include "main.h"
/**
  * _strspn - fn to search a string for a set of bytes
  * @s:hold  source string
  * @accept: holds accepted string
  *
  * Return: it returns number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y, t = 0;

	while (accept[x])
	{
		y = 0;

		while (s[y] != 32)
		{
			if (accept[x] == s[y])
			{
				t++;
			}

			y++;
		}

		x++;
	}

	return (t);
}

