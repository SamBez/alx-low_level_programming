#include <stdlib.h>
#include <stdio.h>
/**
 * main - mainf
 * Return: 0 for ll
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
