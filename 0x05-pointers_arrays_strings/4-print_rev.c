#include "main.h"
/**
 * print_rev - function theat prints stringin reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int p = 0;
	int o;

	while (*s != '\0')
	{
		p++;
		s++;
	}
	s--;
	for (o = p; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
