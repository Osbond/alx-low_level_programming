#include "main.h"
/**
 * _islower - print 1 if its lowercase otherwise 0
 *@c: This is an integer
 *Return: 1(Success)
 *On error, 0(failure)
 */
int _islower(int c);

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

