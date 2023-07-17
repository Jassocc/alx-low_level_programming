#include <stdio.h>
#include <Stdlib.h>
#include "dog.h"

/**
 * length - find length of string
 * @str: string
 * Return: length
 */

int length(char *str)
{
	int a = 0;

	for (; *(str + a); a++)
	;

	return (a);
}

/**
 * _strcpy - copies string
 * @dest: copy to this
 * @src: pointer to be copied
 * Return: copy
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (; a <= length(src); a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

/**
 * new_dog - create new dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int l1 = length(name), l2 = length(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (l1 + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
