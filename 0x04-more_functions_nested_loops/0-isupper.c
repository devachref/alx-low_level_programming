#include "main.h"
#include <ctype.h>

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */


int _isupper(int c)
{

	/*if (c >= 'A' && c <= 'Z')*/
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
