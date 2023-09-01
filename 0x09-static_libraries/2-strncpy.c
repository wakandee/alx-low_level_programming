#include "main.h"
/**
 * _strncpy - fuction to copy a string
 * @dest: input val
 * @src: input val
 * @n: input val
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;


	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}


	return (dest);
}


