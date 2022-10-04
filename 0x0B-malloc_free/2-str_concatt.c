#include "main.h"

/**
 * str_concat - Function that concatenates string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: character on success,
 * On error, NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i = 1, j = 1, k = 0, l = 0;
	char *copy;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	copy = malloc((i + j) * sizeof(char)+5);

	while (k < i)
	{
		copy[k] = s1[k];
		k++;
	}
	printf("copy = %s", copy);
	while (i <= (i + j))
	{
		copy[i] = s2[0];
		i++;

	}
	printf("l = %d,  j=%d, i=%d, k=%d",l, j,i,k);

	return (copy);
}
