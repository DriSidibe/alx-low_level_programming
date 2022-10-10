#ifndef __STRUCT__
#define __STRUCT__

/**
 * struct dog - Define a new type struct dog with
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{

	char *name;
	float age;
	char *owner;

}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
