#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

/**
 * function_d - this function change a number in character for the print.
 *
 * @num: the num for the change
 *
 * @count: conts the numbers printed in the function
 */

void function_d(long int num, int *count)
{
	char arr[30];
	int x = 0;
	int Negativo = 0;

	if (num < 0)
	{
		Negativo = 1;
		num = -num;
	}

	do {
		arr[x++] = '0' + (num % 10);
		num /= 10;
		(*count)++;
	} while (num > 0);

	if (Negativo)
	{
		arr[x++] = '-';
		(*count)++;
	}

	while (x > 0)
	{
		_putchar(arr[--x]);
	}
}

/**
 * function_s - the function print a string and recive the position go to print
 *
 * @string: the string go to print
 *
 * @position: the position where go to print
 */

void function_s(const char *string, int *position)
{
	int x;

	for (x = 0; string[x] != '\0'; x++)
	{
		_putchar(string[x]);
		(*position)++;
	}
}
