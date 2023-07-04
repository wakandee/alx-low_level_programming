#include "main.h"
/**
  * _strchr -fn to locate character in string
  * @s: holds the source string
  * @c: holds the character to find
  * Return: it returns the string from character found
  */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}

