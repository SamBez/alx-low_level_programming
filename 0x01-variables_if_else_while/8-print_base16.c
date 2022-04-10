#include <stdlib.h>
#include <stdio.h>
/**
 * main - mainf
 * Return: 0 fol all
 */
int main(void)
{
	int x;
	int ch = 'a';

	for (x = 0; x < 16; x++)
	{
		if (x > 9 && x < 16)
		{
			putchar(ch);
			ch++;
		}
		else
		{
		putchar(x);
		}
	}
	return (0);
}
