#include <stdio.h>

/**
 * main - a c program that prints numbers in base 10
 * including 0, followed by a new line
 * Return: Always 0
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
printf("%d", n);
}
printf("\n");
return (0);
}
