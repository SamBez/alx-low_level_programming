#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void print_alphabet(void);


static inline void _putchar(void)
{
    printf("%s", "_putchar");
    putchar('\n');
}
#endif