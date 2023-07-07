#include "main.h"
/**
 * _puts - Entry point
 *@str: string, followed by a new line
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
