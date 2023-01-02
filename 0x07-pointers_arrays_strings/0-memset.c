#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 *
 * @n: bytes of the memory area pointed to by s
 *
 * @s: pointer to the memory area
 *
 * @b: constant byte
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsingned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
