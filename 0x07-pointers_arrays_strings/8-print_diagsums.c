#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: matrix
 * @size: size of a
 */

void print_diagsums(int *a, int size)
{
int j;
int sum = 0;
int sum1 = 0;

for (j = 0; j < size; j++)
{
	sum += a[j * size + j];
}
for (j = 0; j < size; j++)
{
	sum1 += a[j * size + (size - 1 - j)];
}
printf("%d, %d\n", sum, sum1);
}
