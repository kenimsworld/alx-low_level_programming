#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: char to search for
 *
 * @s: string of char
 *
 * Return: a pointer to the first occurrence of the char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
