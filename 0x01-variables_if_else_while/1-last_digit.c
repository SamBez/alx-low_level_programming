#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - mainf
 * Return: 0 is 
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("The last digit of %d is greater then 5", n);
	}
	if (x < 6 && x == 0)
	{
		printf("The last digit of %d is less than 6 and not 0", n);
	}
	if (x == 0)
	{
		printf("the last digit of %d is Zero", n);
	}
	return (0);
}
