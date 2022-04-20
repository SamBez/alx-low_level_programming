#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, index = 0, i;

	while (s[index] != -1){
		len++;
        index++;
    }


	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	putchar('\n');
}