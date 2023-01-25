#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list string;
unsigned int i;
char *str;
if (separator == NULL)
{
separator = "";
}
va_start(string, n);
for (i = 0; i < n; i++)
{
str = va_arg(string, char *);
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
if (n == i + 1)
{
break;
}
printf("%s", separator);
}
printf("\n");
va_end(string);
}
