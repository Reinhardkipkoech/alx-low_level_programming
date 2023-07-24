#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int p = 0;
	int i;

	while (s[p] != '\0')
	p++;
	for (i = 0; i < p; i++)
	{
		p--;
		rev = s[i];
		s[i] = s[p];
		s[p] = rev;
	}
}
