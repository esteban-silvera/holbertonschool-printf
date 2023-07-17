#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - function that produces output according to a format
 *
 * @format: string which guides the generation of the desired output
 *
 * Return: 'length'
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;
	char c;

	va_start(args, format);

	while ((c = *format++) != '\0')
	{
		if (c != '%')
		{
			_putchar(c);
			length++; }
		else
		{
			c = *format++;

			switch (c)
			{
			case 'c': {
					char arg = va_arg(args, int);

					_putchar(arg);
					length++;
					break; }
			case 's': {
					const char *arg = va_arg(args, const char *);

					while (*arg != '\0')
					{
						_putchar(*arg);
						arg++;
						length++; }
					break; }
			case '%': {
					_putchar('%');
					length++;
					break; }
				default:
					break;
			} } }
	va_end(args);
	return (length);
}
