#include "main.h"

/**
* handling_int - a function that handles the integer format specifier
* @next: the next character after the % symbol
* @args: the list of arguments
*
* Return: the number of characters printed
*/
int handling_int(char next, va_list args)
{
int num;
int count = 0;

if (next == 'd' || next == 'i')
{
num = va_arg(args, int);
print_int(num);
count += count_int_chars(num);
return (count);
}
return (0);
}
/**
* handling_string - a function that handles the string format specifier
* @next: the next character after the % symbol
* @args: the list of arguments
*
* Return: the number of characters printed
*/
int handling_string(char next, va_list args)
{
char *str;
int count = 0;

if (next == 's')
{
str = va_arg(args, char *);
print_string(str);
count += _strlen(str);
return (count);
}
return (0);
}