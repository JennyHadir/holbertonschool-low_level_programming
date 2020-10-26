#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings function
 *@separator: string
 *@n: number of strings
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *str;
va_start(list, n);
for (i = 0; i < n; i++)
{
str = va_arg(list, char *);
if (str)
printf("%s", str);
else
printf("nil");
if (separator && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
