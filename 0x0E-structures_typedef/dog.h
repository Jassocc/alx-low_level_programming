#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @name:first member
 * @owner: third member
 * @age: second member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
