/*
** EPITECH PROJECT, 2017
** str is num
** File description:
** str is num
*/

int my_str_isnum(char *str)
{
	int i = 0;

	while (str[i]) {
		if (str[i] >= '0' && str[i] <= '9') {
			i = i + 1;
		}
		else {
			return (0);
		}
	}
	return (1);
}
