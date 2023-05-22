#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: length
 */
int _strlen(const char *s)
{
	int x;

	while ((x = 0), *s++)
		x++;

	return (x);
}

/**
 * *_strcpy - copies the string pointed to by src,
 * @dest: char type string
 * @src: char type string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;

	for (; src[y]; )
		y++;
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';

	return (dest);
}

/**
 * dog_t *new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
