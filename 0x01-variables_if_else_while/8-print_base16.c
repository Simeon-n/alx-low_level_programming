#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	char i;
	int k;

	for (k = 0 ; k < 10 ; k++)
		putchar(k + '0');
	for (i = 'a' ; i >= 'f' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
