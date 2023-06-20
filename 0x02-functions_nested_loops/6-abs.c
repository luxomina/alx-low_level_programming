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
return (x * -1);
}
_putchar('\n');
return (x);
}
