#include <stdio.h>
/**
 * main - program to print alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a' ; letters <= 'z' ; letters++)
	{
		if (letters != 'q' && letters != 'e')
		{
			putchar(letters);
		}
	}
	putchar('\n');
	return (0);
}
