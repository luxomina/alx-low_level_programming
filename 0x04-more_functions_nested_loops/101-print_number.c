#include "main.h"
/**
 * print_number - Entry point
 *@n: prints an integer
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
unsigned int i = n;

if (n < 0)
{
_putchar('_');
i = -i;
}
if (i / 10)
{
print_number(i / 10);
}
_putchar(i % 10 + '0');
}
