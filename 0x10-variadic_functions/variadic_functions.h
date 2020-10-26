#ifndef VARIADIC_H
#define VARIADIC_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct tp - pointer to print all
 * @check: pointer
 * @f: pointer to function
 */
typedef struct tp
{
  char *check;
  void (*f)();
} tp;
#endif
