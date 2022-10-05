#include "main.h"
/**
 * _isalpha - print 1 if its an alphabet otherwise 0
 *@c: This is an integer
 *Return: 1(Success)
 *On error, 0(failure)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
