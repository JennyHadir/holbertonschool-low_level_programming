#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - create new dog function
 *@name: dog name
 *@age: dog age
 *@owner: god owner
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int len;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->age = age;
d->name = malloc(sizeof(name) + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
for (len = 0; name[len]; len++)
d->name[len] = name[len];
d->name[len] = '\0';
d->owner = malloc(sizeof(owner) + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (len = 0; owner[len]; len++)
d->owner[len] = owner[len];
d->owner[len] = '\0';
return (d);
}
