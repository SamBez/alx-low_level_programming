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
    int z;

	for (x = 0; x < 9; x++)
	{
		y = x + 1;
		while (y < 9)
		{
            z = y + 1;
            while(z <= 9)
            {
                putchar(x + '0');
                putchar(y + '0');
                putchar(z + '0');
			    z++;
			    if (x == 7)
			    {
				    continue;
			    }
			    putchar(',');
			    putchar(' ');
            }
			y++;   
		}
	}
	putchar('\n');
	return (0);
}
