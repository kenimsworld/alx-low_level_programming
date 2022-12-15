#include "main.h"

/**
 * print_diagonal - printing lines diagonally on the terminal
 * @n: input variable
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; J++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
