#include "main.h"

/**
*_isalpha - is to check if isalphanumeric
*@c: arg type int
*Return:1 is true
*/
int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
		return (1);
	else
		return (0);
}
