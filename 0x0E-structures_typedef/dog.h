#ifndef _dog_h
#define _dog_h

/**
 * struct dog - Define a new type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: dog's informations are struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
#endif
