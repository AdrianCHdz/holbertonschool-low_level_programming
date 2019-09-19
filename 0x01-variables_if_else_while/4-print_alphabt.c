#include <stdio.h>
/**
 * main - no eq
 *
 *Return: álways
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
			putchar('\n');
		}
	}
	return (0);
}
