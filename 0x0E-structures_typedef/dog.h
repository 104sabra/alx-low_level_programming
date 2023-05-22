#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 * @name: dog's name string
 * @age: dog's age float
 * @owner: dog's owner string
 *
 * Description: a dog struct that has the elements name,
 * age and owner inside it
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
