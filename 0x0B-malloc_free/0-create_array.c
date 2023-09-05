#include"main.h"
#include <stddef.h>
#include <stdlib.h>

/*
 * create_array - funtion that create arrays of characters using malloc
 * @size -hold the size of the array
 * @c - hold the character value
 *
 *
 */
char *create_array(unsigned int size, char c) {
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
