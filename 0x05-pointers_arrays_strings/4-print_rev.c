#include "main.h"
/**
 * print_rev - Entry point
 *@s: prints a string, in reverse
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int x = 0;

while (s[x])
{
x++;
}
while (x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
