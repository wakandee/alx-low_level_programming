#include "main.h"

/**
  * _strpbrk - fn to search a string for any of a set of bytes
  * @s: variable to hold  source string
  * @accept: variable holding accepted characters
  * Return: it retunrs the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		y = 0;

		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				s += x;
				return (s);
			}

			y++;
		}

		x++;
	}

	return ('\0');
}
