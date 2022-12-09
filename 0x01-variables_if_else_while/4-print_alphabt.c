#include <stdio.h>
/**
 * main - print all lower case alphabets
 * except q and e
 * Return: Always 0
 */
int main(void)
{
	char ken;

	for (ken = 'a'; ken <= 'z'; ken++)
	{
		if (ken != 'q' && ken != 'e')
			putchar(ken);
	}

	putchar('\n');

	return (0);
}
