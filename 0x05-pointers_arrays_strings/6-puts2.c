#include "main.h"

/**
 * puts2 -  prints every other character of a string, starting
 * with the first character, followed by a new line
 * @str: char to check
 * Return: Always 0
 */

void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	-putchar('\n');
}
