#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
char Alpha;

for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
putchar(Alpha);
putchar('\n');
return (0);
}
