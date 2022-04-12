#include "main.h"
/**
*print _alphabet_x10 - priny alphabet
*
*Return: Akways 0.
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
