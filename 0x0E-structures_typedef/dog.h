#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 * @name: dog's name string
 * @age: dog's age float
 * @owner: dog's owner string
 *
 * Description: a dog struct that has the elements name, age and owner inside it
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;

#endif
