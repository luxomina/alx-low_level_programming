#include "main.h"
/**
 * string_toupper - Entry point
 * @str: changes all lowercase letters of a string to uppercase
 * Return: string
 */
char *string_toupper(char *str)
{
int x;

for (x = 0; str[x] != '\0'; x++)
{
if (str[x] >= 97 && str[x] <= 122)
{
str[x] = str[x] - 32;
}
}
return (str);
}
