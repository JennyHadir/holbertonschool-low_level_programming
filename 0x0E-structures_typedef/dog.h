#ifndef DOG_H
#define DOG_H
/**
 *struct dog - new type
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
#endif
