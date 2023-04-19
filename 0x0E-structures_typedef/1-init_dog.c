#include "dog.h"
#include <stdlib.h>
/**
  *init_dog- Initializes a variable of type struct dog
  *@d:pointer to struct dog
  *@name:argument to struct dog
  *@age:second argument
  *@owner:pointer argument
  *
  *Description:Function initializes a variable
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
