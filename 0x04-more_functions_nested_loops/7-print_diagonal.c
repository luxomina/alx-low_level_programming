#include "main.h"
/**
 * print_diagonal - Entry point
 *@n: is the number of times the character \ should be printed
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
int x, y;

if (n <= 0)
_putchar('\n');
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
