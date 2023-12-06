#include "main.h"

/**
 * -isdigit - fuction that checks for a digit
 * @c: parameter
 * Return: (1) for true and (0) false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
