#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string to use
 * Return: The value of the length of the string
 */
int _strlen(char *s)
{
	char *start = s;

	while (*s != '\0')
		s++;

	return (s - start);
}

/**
 * *_strcpy - Copies string from @src to @dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	len = _strlen(name);
	dog->name = malloc(sizeof(char) * (len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	len = _strlen(owner);
	dog->owner = malloc(sizeof(char) * (len + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	return (dog);
}
