#include "main.h"
/**
 * print_line - Entry point
 * @n: is the number of times the characte
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (int x = 0; x < n; x++)
{
_putchar('_');
}
_putchar('\n');
}
}
