#include "main.h"
/**
 * puts2 - Entry point
 *@str: prints every other character of a string
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int x;

for (x = 0; str[x] != '\0'; x++)
{
if (x % 2 == 0)
_putchar(str[x]);
}
_putchar('\n');
}
