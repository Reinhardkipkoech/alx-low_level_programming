#include "main.h"
/**
 * swap_int - function that swaps the valus of two integers
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
