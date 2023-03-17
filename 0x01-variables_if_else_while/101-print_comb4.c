#include<stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numL;
int numC;
int numR;
for (numL = 0; numL < 8; numL++)
{
for (numC = numL + 1; numC < 9; numC++)
{
for (numR = numC + 1; numR < 10; numR++)
{
putchar((numL % 10) + '0');
putchar((numC % 10) + '0');
putchar((numR % 10) + '0');
if (numL == 7 && numC == 8 && numR == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
