#include "holberton.h"
/**
 * get_endianness - check the endianness
 *
 *Return: 0 if big 1 little
 */
int get_endianness(void)
{
unsigned int i = 1;
char *endianness;
endianness = (char *)&i;
return (*endianness);
}
