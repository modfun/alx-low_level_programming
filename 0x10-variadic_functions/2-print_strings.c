#include "variadic_functions.h"

/**
 * print_strings - Strings Printing
 * @separator: to be printed between strings unless null
 * @n: number of elements passed
 * @...: strings to be printed.
 *
 * Description: a function that prints strings, followed by a new line.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s = NULL;
	va_list ap;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL)
			printf("%s", separator);
	}
	/* printf("%s\n", va_arg(ap, char *)); */
	s = va_arg(ap, char *);
	if (s != NULL)
		printf("%s", s);
	else
		printf("(nil)");
	printf("\n");
	va_end(ap);
}
