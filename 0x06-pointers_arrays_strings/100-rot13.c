#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *s)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s != '\0')
	{
		char *current_char = s;
		while (*current_char != '\0')
		{
			if (*current_char >= 'A' && *current_char <= 'Z')
			{
				*current_char = rot13[*current_char - 'A' + 26];
			}
			else if (*current_char >= 'a' && *current_char <= 'z')
			{
				*current_char = rot13[*current_char - 'a'];
			}
			current_char++;
		}
		s++;
	}

	return s;
}

