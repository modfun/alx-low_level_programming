#include "variadic_functions.h"

/**
 * printChar - print a character form argument list
 * @ap: arguments pointer to type va_list
 */
void printChar(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * printInt - print a integer form argument list
 * @ap: arguments pointer to type va_list
 */
void printInt(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * printFloat - print a float form argument list
 * @ap: arguments pointer to type va_list
 */
void printFloat(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * printString - print a string form argument list
 * @ap: arguments pointer to type va_list
 */
void printString(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - All Printing
 * @format: is a list of types of arguments passed.
 * @...: arguments to be printed.
 *
 * Description: a function that prints anything, followed by a new line.
 */
void print_all(const char *const format, ...)
{
	int i, j;
	va_list fargs;
	char *s = "";
	mod m[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printString},
		{NULL, NULL},
	};

	va_start(fargs, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (m[j].f != NULL)
		{
			if (*(m[j]).f == format[i])
			{
				printf("%s", s);
				m[j].fn(fargs);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(fargs);
}
