#include "main.h"
/**
 * main - mianf
 * Return: 0 for all
 */
static inline void print_alphabet(void)
{
    char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
    _putchar('\n');
}