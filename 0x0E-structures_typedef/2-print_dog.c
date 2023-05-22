#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: string
 * Return: if d is NULL Nothing
 */
void print_dog(struct dog *d)
{
	struct dog my_dog;
	{
		my_dog.name = "Poppy";
		my_dog.age = 3.5;
		my_dog.owner = "Bob";
	}

	if (d == NULL)
		return;
	if (my_dog.name == NULL)
		d->name = "(nil)";
	if (my_dog.owner == NULL)
		d->owner = "(nil)";
	else
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
