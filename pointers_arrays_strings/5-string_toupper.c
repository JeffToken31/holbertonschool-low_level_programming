#include "main.h"

/**0
 **string_toupper - to reverse a array
 *@*: pointer type char
 *Return: type char
 */
char *string_toupper(char *s)
{
	char *upper = s;
	int i;

	i = 0;
	while (upper[i] != '\0')
	{
	upper[i] = (upper[i] >= 'a' && upper[i] <= 'z') ? upper[i] -'a' + 'A' : upper[i];
	i++;
	}
	return (upper);
}
