/*
** EPITECH PROJECT, 2017
** str cat
** File description:
** Concatenante two strings
*/

char *my_strncat(char *dest, char const *src, int nb)
{
	int size;
	int i = 0;

	size = my_strlen(dest);
	while (i < nb && src[i]) {
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
