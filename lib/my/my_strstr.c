/*
** EPITECH PROJECT, 2017
** my_strstr.c
** File description:
** patern into string
*/

char *my_strstr(char *str, char *to_find)
{
	int i = 0;

	if (str[0] == '\0')
		return (0);
	while (to_find[i] != '\0') {
		if (to_find[i] != str[i])
			return (my_strstr(str + 1, to_find));
		i = i + 1;
	}
	return (str);
}
