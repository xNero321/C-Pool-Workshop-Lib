/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** display strings
*/

int my_putstr(char const *str)
{
	while (*str != '\0') {
		my_putchar(*str);
		str++;
	}
	return (0);
}
