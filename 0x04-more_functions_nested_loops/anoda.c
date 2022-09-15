#include <stdio.h>
void prime_factor(void)
{
	int i = 2;
	int flag = 0;
	int n;
	while (i <= n/2)
	{	
		if (n % i == 0){
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0) {
		printf("%d is a prime number",n);
	}
	else {
		printf("%d is not a prime number", n);


	}
}
