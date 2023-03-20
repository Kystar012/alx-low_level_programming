#ifndef DOG_H
#define DOG_H
/**
  *struct dog - Creates new struct with members name,age,owner
  *@name:element of struct dog
  *@age:element of struct dog
  *@owner:element of struct dog
  *Description:The struct dog prints the name,age amd owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
  *dog_t-typedef for struct dog
  *
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#define dog_t (struct dog)
#endif
