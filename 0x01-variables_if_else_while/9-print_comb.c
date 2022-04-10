#include <stdlib.h>
#include <stdio.h>
/**
 * main - mianf
 * Return: 0 for all
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar(x + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
