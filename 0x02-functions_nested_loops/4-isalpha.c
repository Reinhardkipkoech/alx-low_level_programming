#include "main.h"
/**
 * _isalpha - function that checks for alphabetical characters
 * @c: integer being checked
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
