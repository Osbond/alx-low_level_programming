#include "main.h"

/**
 * main - Function that accepts other functions
 * @argc: Integer
 * @argv: Pointer pointing to an array of strings
 *
 * Return: 0, On success
 * On error, any other integer
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc-1);
	return (0);
}
