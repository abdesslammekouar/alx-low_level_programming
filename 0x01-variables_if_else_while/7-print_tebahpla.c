#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
char Alpha;

for (Alpha = 'z'; Alpha >= 'a'; Alpha--)
putchar(Alpha);
putchar('\n');
return (0);
}
