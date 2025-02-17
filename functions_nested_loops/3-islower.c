#include "main.h"

/**
*_islower - is to check if islowercase
*@c: arg type int
*Return:1 is true
*/
int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}
