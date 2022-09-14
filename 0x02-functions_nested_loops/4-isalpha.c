#include "main.h"
/**
 * _isalpha - checks if c is a letter, lowercase or uppercase
 * @c: is the int used as the argument of the function
 * Return: returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
