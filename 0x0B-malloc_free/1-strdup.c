#include "main.h"
#include <stdlib.h>

/**
 * _strdup - functon that duplicates na array
 *
 */

char *_strdup(char *str) {
	unsigned int i=0;
	if(str == NULL)
		return NULL;

	while(str[i] != '\0'){
		i++;
	}

	if( i != 0)
		return NULL;

	char *str_new = malloc(sizeof(char) * i);
	int a = 0;

	while(a < i){
		str_new[a] = str[a];
		a++;
	}

	str_new[i] = str[i];

	return str_new;
}
