#include <stdio.h>
/**
 * main - Prints the size of data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int size_of_data;

	size_of_data = sizeof(char);
	printf("Size of a char: %d byte(s)\n", size_of_data);
	size_of_data = sizeof(int);
	printf("Size of an int: %d byte(s)\n", size_of_data);
	size_of_data = sizeof(long);
	printf("Size of a long int: %d byte(s)\n", size_of_data);
	size_of_data = sizeof(long long);
	printf("Size of a long long int: %d byte(s)\n", size_of_data);
	size_of_data = sizeof(float);
	printf("Size of a float: %d byte(s)\n", size_of_data);
}
