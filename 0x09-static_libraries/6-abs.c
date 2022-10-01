#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @c:  is the int used as the argument of the function
 * Return: returns 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
