#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>
/**
 *my_str - a function that prints out a string
 *@ptr_args: a list of all the arguments that the function will take
 *Return: The number of characters
 */
int my_str(va_list ptr_args)
{
	char *j;
	int i, chars;

	chars = 0;
	j = va_arg(ptr_args, char *);
	if (j == NULL)
		j = "(null)";
	i = 0;
	while (j[i] != '\0')
	{
		_putchar(j[i]);
		i++;
		chars++;
	}
	return (chars);
}
/**
 *my_char - a funciton that prints out a character
 *@args: a variable that takes in a varrying amount of function arguments
 *Return: Zero is returned
 */
int my_char(va_list ptr_args)
{
	char j;

	j = va_arg(ptr_args, int);
	_putchar(j);
	return (1);
}
/**
 *my_int - A function that prints out the integer
 *@args: a variable that takes in a varrying amount of function arguments
 *Return: The character
 */
int my_int(va_list args)
{
	int n, chars;

	n = va_arg(ptr_args, int);
	chars = print_number(n);
	return (chars);
}
/**
 *_printf - Remaking the printf function in the standard input output library
 *@format: Detects what format the arguments come in as
 *Return: The number of characters to be printed
 */
int _printf(const char *format, ...)
{
	va_list ptr_args;
	int i, j, chars;
	my_type data_type[] = {
		{"s", my_str},
		{"c", my_char},
		{"%", my_percentage},
		{"i", my_int},
		{"d", my_int},
		{NULL, NULL}
	};
	va_start(ptr_args, format);

	chars = i = 0;
	if (format == NULL || ptr_args == NULL)
		return (chars);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j < 5)
			{
				if (*data_type[j].s == format[i])
				{
					chars += (data_type[j].f(ptr_args));
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			chars++;
		}
		i++;
	}
	va_end(ptr_args);
	return (chars);
}
