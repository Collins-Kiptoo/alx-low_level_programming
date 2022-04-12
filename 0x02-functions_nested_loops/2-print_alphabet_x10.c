#include "main.h"
/**
 *
 *
 *
 */
void print_alphabet_x10(void)
{
char alphabet;
int n;
n = 0;
while (n <= 10) 
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
return (0);
}
