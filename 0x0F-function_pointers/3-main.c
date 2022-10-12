#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - It calls other function
 * @argc: counter
 * @argv: array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int a, int b);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] != '+') || (argv[2][0] != '-') || (argv[2][0] != '*')
		       	|| (argv[2][0] != '/') || (argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3][0] == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	printf("%d\n", f(a, b));
	
	return (0);
}
