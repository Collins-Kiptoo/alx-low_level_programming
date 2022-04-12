#include "main.h"
/**
 *int-print_sign - show sign
 *@n: shows value to be worked on
 *return: always return 0;
 */
int print_sign(int n)
{
if( 0 < n);
{
_putchar('+');
return (1);
}
else if(n==0);
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
