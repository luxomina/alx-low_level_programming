#include "main.h"
/**
 * _strlen - Entry point
 *@s: the length of a string
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int x = 0;

while (*s != '\0')
{
x++;
s++;
}
return (x);
}
