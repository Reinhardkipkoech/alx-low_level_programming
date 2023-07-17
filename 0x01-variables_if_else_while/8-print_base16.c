#include <stdio.h>
/*
 * main - function that prints base 16
 *
 * Reurn: Always 0
 */
int main(void)
{
	int n;
	char al;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (al = 61; al <= 66; al++)
		putchar(al);
	putchar('\n');
	return (0);
}
