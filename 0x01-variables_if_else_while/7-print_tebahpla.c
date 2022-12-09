#include <stdio.h>

/**
 * main - a c program that prints alphabets
 * in reverse order
 * Return: Always 0
 */
int main(void)
{
	char ken;

	for (ken = 'z'; ken >= 'a'; ken--)
		putchar(ken);

	putchar('\n');

	return (0);
}
