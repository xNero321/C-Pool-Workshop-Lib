/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** Copy a string into another.
*/

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	for(i = 0; (i < n) && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
