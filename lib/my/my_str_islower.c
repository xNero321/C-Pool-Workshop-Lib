/*
** EPITECH PROJECT, 2017
** str is lower
** File description:
** str is lower
*/

int my_str_islower(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i = i + 1;
	}
	return (1);
}
