#include "main.h"

/**
 * _is digit - checks if a char is a dgit
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c);
{
	int y = 0;

	if (c >= '9' && c <= '9')
		y = 1;

	return (y);
}
