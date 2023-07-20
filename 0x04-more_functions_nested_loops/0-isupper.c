#include "main.h"
/**
 * main - _isupper - function that checks for lower case
 * @c: character being tested
 * Return: 1 or 0
 */
int _isupper(int c)
{
	c = 'A';
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}	
