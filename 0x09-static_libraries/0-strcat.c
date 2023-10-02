#include "main.h"
/**
 * _strcat - function that  concatenates two strings
 * @dest: points to input value
 * @src: points to input value
 *
 * Return: result string @dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
