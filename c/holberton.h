#ifndef H_98_H
#define HO_98_H
#include <unistd.h>
#include <stdarg.h>
/**
 *struct print_a - A struct that has a pointer character and a pointer
 *to a function
 *@s: a character pointer
 *@f: a function pointer
 */
typedef struct data_type
{
	char *check_char;
	int *(*f)();
} my_type;

int my_format(va_list args, my_type data_type[], char format);
int _printf(const char *format, ...);
int _putchar(char c);
int my_number(int n);
void my_struct(void);
int my_percentage(int per);
void _puts(char *str);
#endif
