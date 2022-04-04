#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: arg count
 * @av: arg variables
 * Return: pointer to result string
 */
char *argstostr(int ac, char **av)
{
	int i, len;
	char *str, *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	str = malloc((sizeof(char) * (len + ac)) + 1);

	if (!str)
		return (NULL);

	for (i = 0, ptr = str; i < ac; i++, ptr++)
	{
		_strcpy(ptr, av[i]);
		ptr += _strlen(av[i]);
		*ptr = '\n';
	}

	*ptr = '\0';

	return (str);
}

/**
 * _strlen - Returns string length
 * @str: string to process
 * Return: the string length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
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

	return (dest);
}
