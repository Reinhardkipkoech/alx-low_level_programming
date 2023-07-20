#include "main.h"
/**
 * print_line - function that prints straight line
 * Return: Always 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		int c;

		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
