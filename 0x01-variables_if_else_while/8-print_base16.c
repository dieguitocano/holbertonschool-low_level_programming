#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 *
 *Return: 0
 *
 */
int main(void)
{
char c;
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
