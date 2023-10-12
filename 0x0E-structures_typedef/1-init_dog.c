#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the new struct dog whose variable is to be initialized
 * @d: pointer to the struct of the new dog
 * @name: name of the new dog
 * @Age: age of the new dog
 * @owner: owner of the new dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
