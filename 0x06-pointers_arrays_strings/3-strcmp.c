#include "main.h"
/**
 * _strcmp - Entry point
 *@s1: compares two strings
 *@s2: compares two strings
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
int x = 0;

while (*s1)
{
if (*s1 != *S2)
{
x = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (x);
}
