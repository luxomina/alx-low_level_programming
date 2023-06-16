#include <stdio.h>
/**
 * main - program to print all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0 ; x <= 99 ; x++)
	{
		int x1 = x / 10;
		int x2 = x % 10;

		for (y = x ; y <= 99)
		{
			int y1 = y / 10;
			int y2 = y % 10;

			putchar('0' + x1);
			putchar('0' + x2);
			putchar('0' + y1);
			putchar('0' + y2);
			if (x != 99 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
