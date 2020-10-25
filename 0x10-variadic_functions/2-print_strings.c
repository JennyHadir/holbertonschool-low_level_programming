#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: pointer to a char.
 * @n: number of elements.
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
char *str;
if (n != 0)
va_start(list, n);
for (i = 0; i < n; i++)
{
str = va_arg(list, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
