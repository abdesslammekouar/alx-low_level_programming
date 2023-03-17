#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
char Alpha;
for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
putchar(Alpha);
for (Alpha = 'A'; Alpha <= 'Z'; Alpha++)
putchar(Alpha);
putchar('\n');
return (0);
}
