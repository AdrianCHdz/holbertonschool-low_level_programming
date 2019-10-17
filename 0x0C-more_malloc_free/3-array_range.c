#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - prints the numbers from the min to the max
 * @min: print the first and delimits the beggining
 * @max: the delimiter to the end
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *c;
	int a = 0;

	if (min > max)
		return (NULL);
	c = malloc(sizeof(int) * (max - min) + 1);
	if (c == NULL)
		return (NULL);
	while (a <= max)
	{
		c[a] = min;
		a++;
		min++;
	}
	return (c);
}
