#include "dog.h"
#include <stdio.h>
/**
 *print_dog - dog coordination function
 *@d: dog struct
 *Return: void
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name)
printf("Name: %s", d->name);
else
printf("Name: (nil)");
printf("\n");
printf("Age: %f", d->age);
printf("\n");
if (d->owner)
printf("Owner: %s", d->owner);
else
printf("Owner: (nil)");
printf("\n");
}
}
