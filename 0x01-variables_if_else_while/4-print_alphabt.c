#include <stdio.h>

/**
 *main - Alphabet soup
 *
 *Return: Always 0
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter !='q')
putchar(letter);
}
putchar('\n');
return (0);
}
