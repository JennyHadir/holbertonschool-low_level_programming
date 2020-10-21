#ifndef FUNCTION_FILE_H
#define FUNCTION_FILE_H
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
