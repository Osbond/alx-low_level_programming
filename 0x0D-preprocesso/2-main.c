#include <stdio.h>

/**
 * main - function tht prints the name of file it was compiled from
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
