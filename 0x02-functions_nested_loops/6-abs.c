#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = -1 * i;
	}
	else if (i == 0)
	{
		i = 0;
	}
	else if (i > 0)
	{
		i = i;
	}
	return (i);
}
