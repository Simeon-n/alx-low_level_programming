#include <stdio.h>

/**
 * main - a program that prints all the single digits of base 10
 *
 * Return: always 0
 */

int main(void)
{
	int (i);

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
