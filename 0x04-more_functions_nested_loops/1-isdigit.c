#include "main.h"
/**
 * _isdigit - Function that checks for number between 0 and 9
 * @c: number in question
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
