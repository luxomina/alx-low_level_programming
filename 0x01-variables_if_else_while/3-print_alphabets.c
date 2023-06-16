#include <stdio.h>
/**
 * main - a program prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	if (lowercase <= 'z' && uppercase <= 'Z')
	{
		putchar(lowercase, uppercase);
	}
	putchar('\n');
	return (0);
}
