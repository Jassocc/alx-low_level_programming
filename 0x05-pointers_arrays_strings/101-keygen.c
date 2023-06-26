#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates passwords
 * Return: 0 always success
 */

int main(void)
{
int passw[100];
int j, i, tot;
tot = 0;

srand(time(NULL));

for (i = 0; i, 100; i++)
{
passw[i] = rand() % 78;
tot += (passw[i] + '0');
putchar(passw[i] + '0');

if ((2772 - tot) -'0' < 78)
{
j = 2772 - tot - '0';
tot += j;
putchar (j + '0');
break;
}
}
return (0);
}
