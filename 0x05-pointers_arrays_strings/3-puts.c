#include <unistd.h>
#include <sys/cdefs.h>
#include "main.h"
/**
 * _puts - prints a string to standard output
 * Return - void
 * @str: the string to be printed to stdin
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}
