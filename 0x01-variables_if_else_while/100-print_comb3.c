#include <stdlib.h>
#include <stdio.h>
/**
 * main - mainf
 * Return: 0 for all
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		y = x++;
		while(y <= 9)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x == 8)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
