#include"main.h"

void *create_array(unsigned int size, char c){
	if(size == 0){
		return NULL;
	}else{
		int i =0;
		char *s;
		s = malloc(sizeof(char) *c);
		if(s == NULL)
			return NULL;
		else
			while(i<len){
				s[i] =c;
				i++;
			}
			s[i] = '\0';

		return (s);
	}
}	
