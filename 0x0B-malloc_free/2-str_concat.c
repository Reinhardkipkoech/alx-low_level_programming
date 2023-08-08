#include "main.h"
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i;
	int n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	for (n = 0; s2[n] != '\0'; n++)
	con = malloc(sizeof(char) * (i + n + 1));

	if (con == NULL)
		return (NULL);
	i = n = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}

	while (s2[n] != '\0')
	{
		con[i] = s2[n];
		i++, n++;
	}
	con[i] = '\0';
	return (con);
}
