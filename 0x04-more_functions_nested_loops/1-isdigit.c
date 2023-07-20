#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{

	/*if (c >= '0' && c <= '9')*/
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
