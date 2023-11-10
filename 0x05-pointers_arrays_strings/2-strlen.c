#include <stdio.h>
/**
 *_strlen - counts the number of characters in a string
 *@s:characters to be counted
 *Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
	i++;
	}

	return (i);
}

