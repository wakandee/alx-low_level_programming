#include "main.h"
/**
  * _memcpy - funtion to copy memory area
  * @dest: refers to  destination  memory area
  * @src:refers to the  source memory area
  * @n: refers to the  bytes from memory area to copy
  * Return: returns  memory area replaced
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}

