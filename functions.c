#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

/**
 * function_d - this function change a number in character for the print.
 *
 * @num: the num for the change
 */

void function_d(int num)
{
	char arr[20];
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
	} while (num > 0);

	if (Negativo)
	{
		arr[x++] = '-';
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
	}
	(void)position;
}
