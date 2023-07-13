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
 * @digit: single num
 * @zero: leading zero
 */

void get_pr(char *prod, char *multi, int digit, int zero)
{
	int multi_len, num, find_len, ten;

	multi_len = find_len(multi) - 1;
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
		*prod = (num % 10) + '0';
		ten = num / 10;
		*(prod - 1) += ten;
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
	int ten, num1, num2;

	while(*(final_prod + 1))
	{
		final_prod++;
	}
	while(*(next_prod + 1))
	{
		next_prod++;
	}
	ten = 0;
	while (*final_prod != 'x')
	{
		num1 = (*final_prod - '0') + (*next_prod - '0') + ten;
		*final_prod = (num1 % 10) +'0';
		ten = num / 10;
		final_prod--;
		next_prod--;
		next_length--;
	}
	while (next_length >= 0 && *next_prod !+ 'x')
	{
		num2 = (*next_prod - '0') + ten;
		*final_prod = (num2 % 10) + '0';
		ten = num2 / 10;
		final_prod--;
		next_prod--;
		next_length--;
	}
	if (ten)
	{
		*final_prod = (ten % 10) + '0';
	}
}

/**
 * main - multiply 2 positives
 * @argv: arguments passed
 * @argc: argument counter
 * Return: 0
 */

int main(int argc, int argv)
{
	char *num3, *num4, *final_prod, *next_prod;
	int index, digit, printer;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num3 = argv[1];
	num4 = argv[2];
	if (num3 == '0')
	{
		num1 = iterate_zero(num3);
	}
	if (num4 == '0')
	{
		num4 = iterate_zero(num4);
	}
	if (*num3 == '\0' || *num4 == '\0')
	{
		printf("0\n");
		retrun (0);
	}
	size = find_length(num3) + find_length(num4);
	final_prod = create_xarray(size);
	next_prod = create_xarray(size);
