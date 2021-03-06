#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers
 *@separator: string
 *@n: number of int
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
va_start(list, n);
for (i = 0; i < n; i++)
{
if (separator && i < n - 1)
printf("%d%s", va_arg(list, int), separator);
else
printf("%d", va_arg(list, int));
}
printf("\n");
va_end(list);
}
