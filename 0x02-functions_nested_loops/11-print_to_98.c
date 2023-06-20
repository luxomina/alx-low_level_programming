#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: all natural numbers
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int count;

if (n > 98)
{
for (count = n; count > 98; count--)
{
_putchar("%d, ", count);
}
}
else
{
for (count = n; count < 98; count++)
{
_putchar("%d, ", count);
}
}
_putchar("98\n");
}
