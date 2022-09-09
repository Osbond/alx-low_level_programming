#include <stdio.h>
int main(void)
{
	int i;

	for (i = '0'; i<= '9'; i++)
	{
		putchar(i);
		printf(sezeof(i));
	}
	return (0);
}
