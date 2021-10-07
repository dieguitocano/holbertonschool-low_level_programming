#include "main.h"

/**
 *print_alphabet - print_alphabet_x10
 *
 *Return: 0
 */
void print_alphabet_x10(void)
{
int c;
char d;

for (c = 1; c <= 10; c++)
{
for (d = 97; d < 123; d++)

{
_putchar(d);
}
_putchar('\n');
}
}

