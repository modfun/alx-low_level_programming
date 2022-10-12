#include "function_pointers.h"

/**
 * print_name - name print
 * @name: a string
 * @f: a pointer to function with signature void f(char *)
 *
 * Description: a function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
