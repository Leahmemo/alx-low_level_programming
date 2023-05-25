#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - function that prints anything based on the provided format
 * @format: list of types of arguments passed to the function
 * @c: character
 * @i: integer
 * @f: float
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *separator = "";

	va_start(args, format);

while (format && format[i])
{
	switch (format[i])
	{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		default:
			i++;
			continue;
	}

	separator = ", ";
	i++;
}

	va_end(args);

	printf("\n");
}
