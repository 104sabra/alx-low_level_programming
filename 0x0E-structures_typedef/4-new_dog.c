#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - gets the length of a string
 * @s:  pointer to the input string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * new_dog - creates a new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_len, owner_len;
	dog_t *new_dog_p;

	new_dog_p = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog_p == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	new_dog_p->name = malloc((name_len + 1) * sizeof(char));
	new_dog_p->owner = malloc((owner_len + 1) * sizeof(char));
	if (new_dog_p->name == NULL || new_dog_p->owner == NULL)
	{
		free(new_dog_p->name);
		free(new_dog_p->owner);
		free(new_dog_p);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		new_dog_p->name[i] = name[i];

	for (i = 0; i < owner_len; i++)
		new_dog_p->owner[i] = owner[i];

	new_dog_p->name[name_len] = '\0';
	new_dog_p->owner[owner_len] = '\0';

	new_dog_p->age = age;

	return (new_dog_p);
}
