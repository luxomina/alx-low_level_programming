#include "main.h"
/**
 * print_last_digit - Entry point
 * @x: last number
 * Return: Always 0 (Success)
 */
int print_last_digit(int x)
{
int l;

l = n % 10;
if (l < 0)
{
_putchar(-l + '0');
return (-l);
}
else
{
_putchar(l + '0');
return (l);
}
}
