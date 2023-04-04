#include "main.h"

/**
 *print_diagsums - prints the sum of the two diagonals
 *		of a square matrix of integers.
 *@a: matrix of integers.
 *@size: size of the matrix.
 */
void print_diagsums(int *a, int size)
{
int i, x1 = 0, x2 = 0;

for (i = 0; i < size; i++)
{
x1 += a[i];
a += size;
}

a -= size;

for (i = 0; i < size; i++)
{
x2 += a[i];
a -= size;
}

printf("%d, %d\n", x1, x2);
}
