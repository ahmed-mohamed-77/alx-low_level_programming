#include <unistd.h>

/**
* _putchar - writes the chaacter c to stdout
* @c: the charcter to print 
* return :on sucess 1
*on error,-1 is returnes,and errno is set appropriately
**/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
