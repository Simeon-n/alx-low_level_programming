#include <stdio.h>

/**
 *main - prints all possible combinations of two digits
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	
	for (i = 01 ; i < 100 ; i++)
		putchar(i + 0);
	if (i != 00)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
