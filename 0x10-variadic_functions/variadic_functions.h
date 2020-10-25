#ifndef VARIADIC_H
#define VARIADIC_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct pter - pointer to print all
 * @test: pointer to input for test
 * @printer: pointer to function
 */
typedef struct tp
{
  char *check;
  void (*f)();
} tp;
void print_int(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
#endif
