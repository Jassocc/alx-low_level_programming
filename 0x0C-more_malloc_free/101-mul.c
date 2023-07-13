#include "main.h"
#include <Stdio.h>
#include <stdlib.h>

int find_length(char *str);
char *create_xarray(int size);
char *iterate_zero(char *str);
void get_pr(char *prod, char *multi, int digit, int zero);
void add_num(char * final_prod, char *next_prod, int next_length);

/**
 * find_length - finds length of string
 * @str: string
 * Return: length
 */

int find_length(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
	length++;
	str++;
	}
	return (length);
}

/**
 * create_xarray - creates an array of chars
 * @size: size of array
 * Return: pointer to array
 */

char *create_xarray(int size)
{
	char *arr;
	int a;

	arr = malloc(sizeof(char) *(size + 1));
	if (arr == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 0; a < size; a++)
	{
		arr[a] = 'x';
	}
	arr[size] = '\0';

	return (arr);
}

/**
 * iterate_zero - iterate through set of numbers
 * @str: string
 * Return: pointer to non-zero
 */

char *iterate_zero(char *str)
{
	while (*str != '\0' && *str == '0')
	{
		str++;
	}
	return (str);
}

/**
 * get_pr - multiplies string of numbers
 * @prod: stor result
 * @multi: string
 * @digit: 
