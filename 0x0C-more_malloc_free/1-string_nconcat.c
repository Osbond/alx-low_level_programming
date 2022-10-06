#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: string1
 * @s2: string 2
 * @n: integer
 *
 * Return: Character pointer on success
 * on error Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_length = 0, s2_length = 0, i, sum, k;
	char *ptr;
	unsigned int j, l;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_length] != '\0')
		s1_length++;
	while (s2[s2_length] != '\0')
		s2_length++;
	sum = s1_length + s2_length;
	ptr = malloc(sizeof(*ptr) * sum);
	i = 0;
	while (i < s1_length)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0, k = i;
	l = (unsigned int) s2_length;
	if (n >= l)
		n = s2_length;
	while (j < n)
	{
		ptr[k] = s2[j];
		j++;
		k++;
	}
	ptr[sum] = '\0';
	
	if (!ptr)
		return (NULL);
	return (ptr);
}
