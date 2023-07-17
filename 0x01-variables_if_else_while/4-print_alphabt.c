#include <stdio.h>
/*
 * main - Function that prints alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	int al = 'a';

	while (al <= 'z')
	{
		if (al != 'q' && al != 'e')
		{
		putchar(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}
