#include "main.h"

/**
* main - Entry point
*
* description - print_alphabet (in lower case)
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
