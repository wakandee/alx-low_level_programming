
#include "main.h"
/**
 *  _strcat - is a function that concatenates two strings
 *  @dest: entered value
 *  @src: entered value
 *
 *  Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int k;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}


	dest[i] = '\0';
	return (dest);
}
