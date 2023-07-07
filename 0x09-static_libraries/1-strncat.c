#include "main.h"
/**
 * _strncat - Entry point
 *@dest: concatenates two strings.
 *@src: concatenates two strings.
 *@n: concatenates two strings.
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int x, y;

x = 0;
while (dest[x])
x++;
for (y = 0; y < n && src[y] != '\0'; y++)
dest [x + y] = src[y];
dest [x + y] = '\0';
}
