#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - initialize dog function
 *@d: dog struct
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
