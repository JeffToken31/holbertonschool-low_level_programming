#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - print name
 *@name : pointer char *
 *@f: call pointer function
 *return: just call print function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(-1);
	f(name);
}
