#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */
void print_alphabet_x10(void)
{
char alphabet;
int n;
n = 0;
while (n < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
n++;
_putchar('\n');
}

}
