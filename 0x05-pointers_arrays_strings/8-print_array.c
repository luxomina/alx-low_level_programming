#include "main.h"
/**
 * print_array - Entry point
 *@n: prints n elements of an array of integers
 *@a: prints n elements of an array of integers
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
if (x != (n - 1))
printf("%d, ", a[x]);
else
printf("%d", a[x]);
}
printf("\n");
}
