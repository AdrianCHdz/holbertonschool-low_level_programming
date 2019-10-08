#include "holberton.h"
/**
 * _memcpy - copies bytes from src to dest
 * @dest: The place where the bytes will be stored
 * @src: The bytes that will be coping.
 * @n: the limit of bytes that will be copied.
 * Return: Destiny.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
