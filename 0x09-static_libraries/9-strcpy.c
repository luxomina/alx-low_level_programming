#include "main.h"
/**
 * *_strcpy - Entry point
 *@dest: copies the string pointed
 *@src: copies the string pointed
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
int x = -1;

do {
x++;
dest[x] = src[x];
} while (src[x] != '\0');
return (dest);
}
