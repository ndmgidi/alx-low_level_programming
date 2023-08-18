#include "main.h"

/**
*_isupper - function that verifies a character as uppercase 
*Discription: Prints alphabet with putchar
*@c: tested character
*Return: returns 1 if uppercase ,returns 0 if not
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
