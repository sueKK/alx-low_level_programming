#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		arr[n] = malloc(sizeof(int) * width);
		if (arr[n] == NULL)
		{
			for (; n >= 0; n--)
				free(arr[n]);
			free(arr);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
			arr[n][4] = 0;
	}
	return (arr);
}
