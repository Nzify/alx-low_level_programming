#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	x = 0;
	z = 0;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				z++;
				break;
			}
			y++;
		}
		if (accept[y] == '\0')
			break;
		x++;
	}
	return (z);
}


