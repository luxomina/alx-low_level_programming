#include "main.h"
/**
 * _abs - Entry point
 * @x: input integer
 * Return: Always 0 (Success)
 */
int _abs(int x)
{
if (x < 0)
{
x = (-1) * x;
return (x);
}
_putchar('\n');
}
