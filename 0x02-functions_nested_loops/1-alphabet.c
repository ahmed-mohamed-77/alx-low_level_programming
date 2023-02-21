#include "main.h"

/**
* main - Entry point
*
* print_alphabet -print all (in lower case)
* Return:on success
**/

void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);
}
_putchar('\n');
}
