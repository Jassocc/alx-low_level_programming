#include <stdio.h>

/**
 * main - finds and prints the first 98
 * Return: 0
 */

int main(void)
{
unsigned long prev = 1;
unsigned long current = 1;
unsigned long sum = 0;
long prev_top, prev_bottom, current_top, current_bottom, sum_top, sum_bottom;
int count, over;
printf("1");
for (count = 2; count < 93; count++)
{
sum = prev + current;
prev = current;
current = sum;
printf(", %lu", sum);
}
prev_top = prev / 1000000000;
prev_bottom = prev % 1000000000;
current_top = current / 1000000000;
current_bottom = current % 1000000000;
for (; count <= 98; count++)
{
over = (prev_bottom + current_bottom) / 1000000000;
sum_bottom = ((prev_bottom + current_bottom)-(1000000000 * over));
sum_top = ((prev_top + current_top)+over);
printf(", %lu%lu", sum_top, sum_bottom);
prev_top = current_top;
prev_bottom = current_bottom;
current_top = sum_top;
current_bottom = sum_bottom;
}

printf("\n");

return (0);
}
