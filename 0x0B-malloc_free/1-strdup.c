#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  * _strdup - duplicate to new memory space location
 *  @str: char
 *  Return: 0
*/
char *_strdup(char *str)
{
	char *pt;
	int i, x = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;
	pt = malloc(sizeof(char) * (i + 1));
	if (pt == NULL)
	return (NULL);
	for (x = 0; str[x]; x++)
	pt[x] = str[x];
	return (pt);
}
