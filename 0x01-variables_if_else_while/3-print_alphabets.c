#include <stdio.h>

/**
 * main - prints alphabet in lower, then upper case
 *
 * Return: Always 0
 */
int main(void)
{
	char ken;

	for (ken = 'a'; ken <= 'z'; ken++)
	{
		putchar(ken);
	}

	for (ken = 'A'; ken <= 'Z'; ken++)
	{
		putchar(ken);
	}
	putchar('\n');
	return (0);
}
