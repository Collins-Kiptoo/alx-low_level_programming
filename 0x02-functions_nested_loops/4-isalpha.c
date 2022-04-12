#include "main.h"
/**
 * 4-is_aplha - Declares whether c is an aplhabet
 * @c: Value to be compared
 * return; always return 0;
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
