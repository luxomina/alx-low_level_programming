#include "main.h"
/**
 * more_numbers - Entry point
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int num, x, y;

for (x = 1; x <= 10; x++)
{
for (y = 0; y <= 14; y++)
{
num = y;
if (y > 9)
{
_putchar(1 + '0');
num = % y;
}
_putchar(y + '0');
}
_putchar('\n');
}
}
