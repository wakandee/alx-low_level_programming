#include "main.h"
#include <stdlib.h>

/**
 * _strdup - functon that duplicates na array
 *
 */

char *_strdup(char *str) {

	unsigned int i;
	unsigned int a;
	char *str_new;

	if(str == NULL)
		return NULL;

	while(str[i] != '\0'){
		i++;
	}

	if( i == 0)
		return NULL;

	str_new = malloc((sizeof(char) * i) + 1);

	while(a < i){
		str_new[a] = str[a];
		a++;
	}

	str_new[i] = '\0';

	return str_new;
}
