#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c:  is the int used as the argument of the function
 * Return: retuens 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
