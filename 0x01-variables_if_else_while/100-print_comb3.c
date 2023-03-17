#include<stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numL;
int numR;
for (numL = 0; numL < 9; numL++)
{
for (numR = numL + 1; numR < 10; numR++)
{
putchar((numL % 10) + '0');
putchar((numR % 10) + '0');
if (numL == 8 && numR == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
