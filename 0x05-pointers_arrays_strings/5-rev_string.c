#include "main.h"
#include <stdio.h>
/**
 * rev_string - A function that reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
        int length, i, j;

	char temp;

        length = _strlen(s);
        i = length - 1;
	j = 0;
	

        while (i >= 0)
        {

		temp = s[i];
                s[i] = s[j];
		s[j] = temp;
                i--;
		j++;
        }
}

/**
 * _strlen - find the length of a string
 * @s: string
 *
 * Return: Integer;
 */
int _strlen(char *s)
{
        int i, count;

        i = 0;
        count = 0;
        while (s[i] != '\0')
        {
                count++;
                i++;
        }
        return (count);
}

