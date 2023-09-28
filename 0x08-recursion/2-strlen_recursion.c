#include "main.h"
/**
 * _strlen_recursion - function that Returns the length of a string.
 * @s: The string to be measure.
 *
 * Return: The length of  string.
 */
int _strlen_recursion(char *s)
{
	int var = 0;

	if (*s)
	{
		var++;
		var += _strlen_recursion(s + 1);
	}

	return (var);
}
