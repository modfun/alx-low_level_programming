#include "main.h"

/**
 * set_string - set a string
 * @s: a pointer to a pointer to string
 * @to: a pointer to string
 *
 * Description: a function that sets the value of a pointer to a char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
