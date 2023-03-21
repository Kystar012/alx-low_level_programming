#include "dog.h"
#include <stdlib.h>
/**
  *new_dog-new function created
  *@name:First member
  *@age:second member of function new_dog
  *@owner:Third member of function new_dog
  *
  *Return:0(success) or NULL(failure)
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return ('\0');
	}
	else

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
