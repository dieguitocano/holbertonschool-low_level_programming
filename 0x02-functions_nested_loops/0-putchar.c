#include "main.h"

/**
 *main - Prints putchar
 *Return: o
 */
int main(void)
{
char c[] = "_putchar";
int d;

for (d = 0; d <= 7; d++)
{
_putchar(c[d]);
}
_putchar('\n');
return (0);
}
