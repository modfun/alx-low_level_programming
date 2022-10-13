#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * struct modifier - modifier object
 * @f: a character representing the type
 * @fn: a function corresponding the modifier
 */
struct modifier
{
	char *f;
	void (*fn)(va_list);
};
typedef struct modifier mod;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
