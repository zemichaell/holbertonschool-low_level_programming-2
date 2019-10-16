#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input row
 * @height: input col
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	char **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc((width * height) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; arr[i] < width; i++)
	{
		for (j = 0; a)
	}
}
