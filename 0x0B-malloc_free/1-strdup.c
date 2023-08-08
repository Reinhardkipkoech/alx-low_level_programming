#include "main.h"
/**
 * _strdup - function that duplicates string
 * @str: original string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	char *n;
	int i;
	int r = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		n = malloc(sizeof(char) * (i + 1));
		{
			if (n == NULL)
				return (NULL);
		}
	}
	for (r = 0; str[r]; r++)
		n[r] = str[r];
			return (n);
}
