#include <stdio.h>
#include <stdlib.h>

char **strtow(char *);

/**
 * print_tab - Prints an array of string
 *
 * @tab: The array to print
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	char **tab;

	tab = strtow("                ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
