#include "variadic_functions.h"

/**
 * print_numbers - Numbers Printing
 * @separator: to be printed between numbers unless null
 * @n: number of elements passed
 * @...: numbers to be printed.
 *
 * Description: a function that prints numbers, followed by a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
