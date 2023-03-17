#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,expect e && q.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
char Alpha;
for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
{
if (Alpha != 'e' && Alpha != 'q')
putchar(Alpha);
}
putchar('\n');
return (0);
}
