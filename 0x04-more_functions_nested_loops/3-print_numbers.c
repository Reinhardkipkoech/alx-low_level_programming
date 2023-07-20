#include "main.h"
/**
 * print_numbers - Function that prints numbers 0 to 9
 * followed by new line
 * Return: Always 0
 */
void print_numbers(void)
{
	char al;

	for (al = 48; al <= 58; al++)
		_putchar(al);
	_putchar('\n');
}
