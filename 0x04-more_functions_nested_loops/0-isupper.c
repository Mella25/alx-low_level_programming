#include "main.h"

/**
 * _isupper - Checks lowercase characters
 * @c: The character to be checked
 * Return: 1 if c is uppercase or 0 if c is lowercase
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
