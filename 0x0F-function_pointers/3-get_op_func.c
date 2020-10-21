#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
/**
 *get_op_func - select the right operator function
 *@s: operator
 *Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op)
{
if (ops[i].op[0] == s[0])
return (ops[i].f);
i++;
}
return (NULL);
}
