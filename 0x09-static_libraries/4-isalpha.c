#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: Character to check
 * Return: 1 if lowere or upper and 0 for non-alphabet
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);

}
