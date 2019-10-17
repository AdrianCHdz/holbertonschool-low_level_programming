#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int a = 0;
	int b = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc((sizeof(int *) * height) + 1);
	if (matrix == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		*(matrix + a) = malloc((sizeof(int) * width) + 1);
		if (*(matrix + a) == NULL)
		{
			for (b = 0; b <= a; b++)
			{
				free(*(matrix + b));
			}
			free(matrix);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			matrix[a][b] = 0;
		}
	}
	return (matrix);
}
