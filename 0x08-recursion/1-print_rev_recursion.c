#include "holberton.h"
/**
 * _print_rev_recursion - print a string in reverse function
 *
 * @s: pointer to a string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
}
