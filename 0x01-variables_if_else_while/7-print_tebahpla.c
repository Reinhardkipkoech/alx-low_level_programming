#include <stdio.h>
/**
 * main - Function that prints alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);
	putchar('\n');
	return (0);
}
