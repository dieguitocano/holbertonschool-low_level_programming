#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Prints all single digit numbers base 10 starting 0
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}

putchar('\n');

return (0);
}
