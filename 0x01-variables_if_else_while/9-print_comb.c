#include <stdlib.h>
#include <stdio.h>
/**
 * main - mianf
 * Return: 0 for all
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
