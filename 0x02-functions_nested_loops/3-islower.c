#include "main.h"

/**
 * _islower - check for lowercaase characters
 * @c: c is simply an ASCII character
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
