#include "main.h"
#include <stdio.h>

/**
 *set_string - sets the value of a pointer to a char
 *@s: pointer of pointer value to set
 *@to: poitnter to copy value
 *return: no return
 */
void set_string(char **s, char *to)
{
	*s = to;
}
