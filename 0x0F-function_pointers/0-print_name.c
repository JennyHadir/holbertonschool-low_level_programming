#include "function_pointers.h"
/**
 * print_name - print name function
 *@name: string
 *@f: function
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
