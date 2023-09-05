#include "main.h"
#include <stdlib.h>

/**
 * _strdup - functon that duplicates na array
 * @str - variable for pointing to original charcter 
 */

char *_strdup(char *str)
{
	unsigned int i = 1;
	unsigned int a = 0;
	char *str_new;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	str_new = malloc((sizeof(char) * i) + 1);

	if (str_new == NULL)
		return (NULL);

	while (a < i)
	{
		str_new[a] = str[a];
		a++;
	}

	str_new[i] = '\0';
	return (str_new);
}
