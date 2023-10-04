#include "main.h"
#include<stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height  input
 *  Return: pointer to 2 dim.array
*/
int **alloc_grid(int width, int height)
{
	int **pt;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	pt = malloc(sizeof(int *) * height);
	if (pt == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		pt[x] = malloc(sizeof(int) * width);
		if (pt[x] == NULL)
		{
			for (; x >= 0; x--)
				free(pt[x]);
			free(pt);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			pt[x][y] = 0;
	}
		return (pt);
}
