#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: character to be tested
 * Return: returns 1 if ture, otherwise returs  0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
