#include "main.h"

/**
 * main - Function that accepts other functions
 * @argc: Integer
 * @argv: Pointer pointing to an array of strings
 *
 * Return: 0, On success
 * On error, any other integer
 */
int main(__attribute__((unused))int argc, char * arg[])
{
	printf("%s\n",arg[0]);
	return (0);
}
