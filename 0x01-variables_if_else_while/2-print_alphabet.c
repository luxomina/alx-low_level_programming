#include <stdio.h>
/**
 * main - program to put alpahbet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
