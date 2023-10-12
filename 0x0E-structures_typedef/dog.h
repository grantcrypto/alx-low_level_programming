#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct that creates a dog info
 *
 * @name: name of owner
 * @age: abe of owner
 * @owner: the owner of the dog
 *
 * Description: first struct with alx
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
