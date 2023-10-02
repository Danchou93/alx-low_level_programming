#include "main.h"
/**
 * _strcmp - function that compare string values
 * @s1: pointer to input value
 * @s2: pointer to input value
 *
 * Return: 1 if true, 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
