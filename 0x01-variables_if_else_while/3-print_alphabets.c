#include <stdio.h>
#include <stdlib.h>
/**
 * main - mainf
 * Return: 0 for func
 */
int main(void)
{
	char chC;
	char chL;

	for (chC = 'a'; chC <= 'z'; chC++)
	{
		putchar(chC);
	}
	for(chL = 'A'; chL <= 'Z'; chL++)
	{
		putchar(chL);
	}
	putchar('\n');
	return (0);
}
