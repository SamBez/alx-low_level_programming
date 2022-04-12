#include <stdio.h>
static inline void _putchar(void)
{
    printf("%s", "_putchar");
    putchar('\n');
}
static inline void print_alphabet(void)
{
    char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}