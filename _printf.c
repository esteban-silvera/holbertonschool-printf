#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * format_struc - the function is the structur of swithc and case
 *
 * @specifier: is the prisipali paramet go to use the function
 *
 * @args: is the arguments go to recive for print a text
 *
 * @count: the cuantiti of number is a printed
 *
 * Return: retuns the cuantiti number printed in the function _printf
 */

void format_struc(char specifier, va_list args, int *count)
{
	switch (specifier)
	{
		case 's': {
				char *str_arg = va_arg(args, char *);

				if (str_arg == NULL)
					function_s("(null)", count);
				else
				{
					function_s(str_arg, count);
				}
				break;
			}
		case 'c': {
				char char_arg = va_arg(args, int);

				_putchar(char_arg);
				(*count)++;
				break;
			}
		case '%': {
				_putchar('%');
				(*count)++;
				break;
			}
		case 'i':
		case 'd': {
				int int_arg = va_arg(args, int);

				function_d(int_arg, count);
				break;
			}
		default:
		_putchar(specifier);
		(*count)++;
		break;
	}
}


/**
 * _printf - function that produces output according to a format
 *
 * @format: is a content you try to print
 *
 * Return: retuns the cuantiti number printed in the function _printf
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
        {
                return (-1);
        }
	va_start(args, format);


	while (*format)
	{
		if (*format == '%')
		{
		format++;
		format_struc(*format, args, &count);
		}
		else
		{
		_putchar(*format);
		count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
