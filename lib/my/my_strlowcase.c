/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** low case
*/

char *my_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
