#include "main.h"
/**
 * _strncpy - Entry point
 *@dest: copies a string
 *@src: copies a string
 *@n: copies a string
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int x;

for (x = 0; x < n && src[x] != '\0'; x++)
dest[x] = src[x];
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
