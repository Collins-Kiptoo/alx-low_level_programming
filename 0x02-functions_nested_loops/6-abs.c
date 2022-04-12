#include "main.h"
#include <stdio.h>
/**
 * _abs - value absolute
 *
 *@x: The int to print
 * Return: Always 0.
 */
int _abs(int x)
{
if (x < 0)
{
return (x * (-1));
}
else if (x == 0)
{
return (0);
}
else
{
return (x);
}
}
