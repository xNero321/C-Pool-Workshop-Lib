/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
** Negatif ou Positif
*/

int my_isneg(int n)
{
	if (n < 0) {
		my_putchar('N');
	}
	else {
		my_putchar('P');
	}
	my_putchar('\n');
	return (0);
}
