#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int find_length(char *str);
char *create_xarray(int size);
char *iterate_zero(char *str);
void get_pr(char *prod, char *multi, int digit, int zero);
void add_num(char *final_prod, char *next_prod, int next_length);
int multiply(char c);

/**
 * find_length - finds length of string
 * @str: string
 * Return: length
 */

int find_length(char *str)
{
	int length = 0;

	while (*str++)
	{
	length++;
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

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 0; a < (size - 1); a++)
	{
		arr[a] = 'x';
	}
	arr[a] = '\0';

	return (arr);
}

/**
 * iterate_zero - iterate through set of numbers
 * @str: string
 * Return: pointer to non-zero
 */

char *iterate_zero(char *str)
{
	while (*str && *str == '0')
	{
		str++;
	}
	return (str);
}

/**
 * get_pr - multiplies string of numbers
 * @prod: stor result
 * @multi: string
 * @digit: single num
 * @zero: leading zero
 */

void get_pr(char *prod, char *multi, int digit, int zero)
{
	int multi_len, num, ten;

	multi_len = find_length(multi) - 1;
	multi += multi_len;
	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;
	while (zero--)
	{
		*prod = '0';
		prod--;
	}
	for (; multi_len >= 0; multi_len--, multi--, prod--)
	{
		if (*multi < '0' || *multi > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*multi - '0') * digit;
		num += ten;
		*prod = (num % 10) + '0';
		ten = num / 10;
	}
	if (ten)
	{
		*prod = (ten % 10) + '0';
	}
}

/**
 * add_num - add  number from 2 strings
 * @final_prod: storing final product
 * @next_prod: next addition
 * @next_length: length of added prod
 */

void add_num(char *final_prod, char *next_prod, int next_length)
{
	int ten = 0, num;

	while (*(final_prod + 1))
	{
		final_prod++;
	}
	while (*(next_prod + 1))
	{
		next_prod++;
	}
	for (; *final_prod != 'x'; *final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += ten;
		*final_prod = (num % 10) + '0';
		ten = num / 10;

		next_prod--;
		next_length--;
	}
	for (; next_length >= 0 && *next_prod != 'x'; next_length--)
	{
		num = (*next_prod - '0')
		*final_prod = (num % 10) + '0';
		ten = num / 10;
		num += ten;

		final_prod--;
		next_prod--;
	}
	if (ten)
	{
		*final_prod = (ten % 10) + '0';
	}
}

/**
 * multiply - twostrings
 * @c: string
 * Return: product
 */

int multiply(char c)
{
	int digit = c - '0';

	if(digit < 0 || digit > '9')
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * main - multiply 2 positives
 * @argv: arguments passed
 * @argc: argument counter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *num3, *num4, *final_prod, *next_prod;
	int index, digit;
	int size, zero = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num3 = argv[1];
	num4 = argv[2];
	if (*num3 == '0')
	{
		num3 = iterate_zero(num3);
	}
	if (*num4 == '0')
	{
		num4 = iterate_zero(num4);
	}
	if (*num3 == '\0' || *num4 == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = find_length(num3) + find_length(num4);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);
	for (index = find_length(num4) - 1; index >= 0; index--)
	{
		digit = multiply(num4 + index);
		get_pr(next_prod, num3, digit, zero++);
		add_num(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
		{
			_putchar(final_prod[index]);
		}
	}
	_putchar('\n');
	free(next_prod);
	free(final_prod);
	return (0);
}
