#include <stdio.h>
#include <stdlib.h>
/**
 * main - func
 * Return: 0 for all
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return 0;
}
