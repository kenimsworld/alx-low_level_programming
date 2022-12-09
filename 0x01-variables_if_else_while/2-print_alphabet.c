#include <stdio.h>

/**
 * main - prints alphabets in lower cases.
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
	putchar('\n');
	return (0);
}
