#include "main.h"

/**
 *_isupper - checks if the character is in uppercase
 *@c: the character to be checked
 * Return: 1 if true ; 0 if false
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	return (1);
	else
	return (0);
}
