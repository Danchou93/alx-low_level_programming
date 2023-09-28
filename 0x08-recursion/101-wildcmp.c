#include "main.h"
/**
 * wildcmp - compares two strings
 * @n1: normal string
 * @n2: special string containing "*"
 * Return: 1 if identical, else 0
 */
int wildcmp(char *n1, char *n2)
{
	if (*n2 == '\0' && *n1 == '\0')
		return (1);

	if (*n2 == '*' && *(n2 + 1) != '\0' && *n1 == '\0')
		return (0);

	if (*n1 == *n2)
		return (wildcmp(n1 + 1, n2 + 1));

	if (*n2 == '*')
		return (wildcmp(n1, n2 + 1) || wildcmp(n1 + 1, n2));

	return (0);
}
