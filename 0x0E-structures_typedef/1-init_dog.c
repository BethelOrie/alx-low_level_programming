#include "dog.h"
#include <stdlib.h>

/**
*init_dog - nitialize a variable of type struct dog
*@d: The dog to be initialized
*@name: name of dog
*@age: the age of the dog
*@owner: the owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->namei = name;
d->age = age;
d->owner = owner;
}
}
