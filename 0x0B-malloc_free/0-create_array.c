#include"main.h"
#include <stddef.h>
#include <stdlib.h>

/*
 * create_array - funtion that create arrays of characters using malloc
 * @size -hold the size of the array
 * @c - hold the character value
 *
 */
char *create_array(unsigned int size, char c){
	if(size == 0){
		return (NULL);
	}else{
		int i;
		char *s;
		s = malloc(sizeof(char) *c);
		if(s == NULL){
			return (NULL);
		}else{
			for (i = 0; i < size; i++){
				s[i] =c;
				i++;
			}
			s[i] = '\0';
		}

		return (s);
	}
}	
