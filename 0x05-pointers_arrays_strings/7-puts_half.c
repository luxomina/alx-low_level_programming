#include "main.h"
/**
 * puts_half - Entry point
 *@str: prints half of a string
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int x;

for (x = 0; str[x] != '\0'; x++)
;
x++;
for (x /= 2; str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
