/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** Reverse string
*/

char *my_revstr(char *str)
{
	char temp;
	int a;
	int b;

	a = 0;
	b = my_strlen(str) - 1;
	while (a < b) {
		temp = str[a];
		str[a] = str[b];
		str[b] = temp;
		a++;
		b--;
	}
	return (str);
}
