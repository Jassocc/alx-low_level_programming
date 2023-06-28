#include "main.h"

/**
 * reverse_array - fuction to reverse the array
 * @a: array to be reversed
 * @n: amount of elements in array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
int i, j;

for (i = 0; i < n / 2; i++)
{
j = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = j;
}
}
