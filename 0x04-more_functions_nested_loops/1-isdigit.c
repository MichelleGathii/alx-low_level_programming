#include "main.h"

/**
 * _isdigit - checks if a character is a number from 0 - 10
 *@c: the character to be checked
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c < 57 && c >= 48)
		return (1);
	else
		return (0);
}
