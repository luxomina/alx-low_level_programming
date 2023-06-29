#include "main.h"
/**
 * reverse_array - Entry point
 *@a: reverses the content of an array of integers
 *@n: reverses the content of an array of integers
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
int x, y, z;

for (x = 0, y = (n - 1); x < y; x ++, y++)
{
z = a[x];
a[x] = a[y];
a[y] = z;
}
}
