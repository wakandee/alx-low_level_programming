#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - .fn that free a dog..
  * @d: ...
  *
  * Return: ...
  */
void free_dog(dog_t *d)
{i
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
