#include "main.h"

/**
 *jack_bauer() - is to list all minutes in day
 *@:
 *Return: lastd if correct
 */
void jack_bauer(void)
{
	int hours;

	for (hours = 0; hours < 24;)
	{
		int minutes;

		for(minutes = 0; minutes < 60; minutes++)
		{
			_putchar('0' + hours);
			_putchar(':');
			_putchar('0' + minutes);
		}
		hours++;
	}
	return;
}
