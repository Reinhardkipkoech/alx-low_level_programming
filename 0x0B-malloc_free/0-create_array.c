#include "main.h"
/**
 * create_array - function that creates an array
 * @size: size of array
 * @c: pointer to array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	n = malloc(sizeof(char) * size);
	if (n == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		n[i] = c;
	return (n);
}
