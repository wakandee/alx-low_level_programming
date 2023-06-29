#include"main.h";
#include<stdio.h>;
/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int var = 0, i;

	while (dest[var])
	{
		var++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[var] = src[i];
		var++;
	}

	dest[var] = '\0';
	return (dest);
}
