#include "main.h"
/**
 * *_strcat- Entry point
 *@dest: concatenates two strings
 *@src: concatenates two strings
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
int x, y;

x = 0;
while (dest[x])
x++;
for (y = 0; src[y]; y++)
dest[x++] = src[y];
return (dest);
}
