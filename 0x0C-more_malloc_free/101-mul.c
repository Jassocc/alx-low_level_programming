#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int find_length(char *str);
char *create_xarray(int size);
char *iterate_zero(char *str);
void get_pr(char *prod, char *multi, int digit, int zero);
void add_num(char *final_prod, char *next_prod, int next_length);
char *multiply(char *num1, char *num2);

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

	arr = malloc(sizeof(char) * (size + 1));
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
		if (*(str + 1) == '\0')
			break;
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
	int ten, num;

	while (*(final_prod + 1) != 'x')
	{
		final_prod++;
	}
	while (*(next_prod + 1) != 'x')
	{
		next_prod++;
	}
	ten = 0;
	while (*final_prod != '\0')
	{
		num = (*final_prod - '0') + (*next_prod - '0') + ten;
		*final_prod = (num % 10) + '0';
		ten = num / 10;
		if (final_prod == next_prod)
			break;
		final_prod--;
		next_prod--;
	}
	while (next_length >= 0 && *next_prod != 'x')
	{
		num = (*next_prod - '0') + ten;
		*final_prod = (num % 10) + '0';
		ten = num / 10;
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
 * multiply - twostrings
 * @num1: string 1
 * @num2: string 2
 * Return: product
 */

char *multiply(char *num1, char *num2)
{
	int resultIndex, index, len1, len2, resultLen;
	int *product, i, j, digit1, digit2, prod, sum;
	char *result;

	len1 = find_length(num1);
	len2 = find_length(num2);
	resultLen = len1 + len2;
	product = malloc(resultLen * sizeof(int));
	if (product == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < resultLen; i++)
	{
		product[i] = 0;
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			prod = digit1 * digit2;
			sum = product[i + j + 1] + prod;
			product[i + j] += sum / 10;
			product[i + j + 1] = sum % 10;
		}
	}
	index = 0;
	while (index < resultLen && product[index] == 0)
	{
		index++;
	}
	if (index == resultLen)
	{
		return (NULL);
	}
	result = malloc((resultLen - index + 1) * sizeof(char));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	resultIndex = 0;
	while (index < resultLen)
	{
		result[resultIndex++] = product[index] + '0';
		index++;
	}
	result[resultIndex] = '\0';
	free(product);
	return (result);
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
	int index, digit, printer;
	int size, zero;

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
	final_prod = create_xarray(size);
	next_prod = create_xarray(size);
	for (index = find_length(num4) - 1, zero = 0; index >= 0; index--, zero++)
	{
		digit = num4[index] - '0';
		get_pr(next_prod, num3, digit, zero);
		add_num(final_prod, next_prod, size - 1);
	}
	printer = 0;
	for (index = 0; final_prod[index] != '\0'; index++)
	{
		if (final_prod[index] != 'x')
		{
			_putchar(final_prod[index]);
			printer = 1;
		}
		else if (printer)
		{
			_putchar('0');
		}
	}
	_putchar('\n');
	free(next_prod);
	free(final_prod);
	return (0);
}
