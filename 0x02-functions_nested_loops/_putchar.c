#include <unistd.h>

/**
* _putchar - writes the charcter c to stdout
* @c: The Character to print
* Return :1 on success
*on error: -1 is returned and errno is set appropriatel
**/

int _putchar(char c)
{
return (write(1, &c, 1));
}
