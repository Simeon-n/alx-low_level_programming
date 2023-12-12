#include <unistd.h>
/**
 * _putchar - write ..
 * @c: the xtics of print
 * Return: on success 1
 * on error, -1 is returned
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
