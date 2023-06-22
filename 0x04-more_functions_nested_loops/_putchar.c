#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character specified c to stdout
 *@c: Is the character to print
 * Return: When successful return 1
 * when there is an error return -1, errno is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
