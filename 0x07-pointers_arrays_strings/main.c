// C program to demonstrate working of memset()
#include <stdio.h>
#include <string.h>
  
void print_arr(int arr[], int n)
{
	int i = 0;
	while (i < n)
	{
		printf("%d",arr[i]);
		i++;
	}
}
int main()

{

	int n = 20;
    	int arr[n];

	memset(arr, 'c', n* sizeof(arr[0]));
	print_arr(arr, n);
	return 0;
}
