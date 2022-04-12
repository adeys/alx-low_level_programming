#include "dog.h"

/**
 * init_dog - initializes a variable of type struct_dog
 * @d: pointer to variable to initialize
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
