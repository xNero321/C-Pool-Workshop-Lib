/*
** EPITECH PROJECT, 2017
** my_compute_square_root.c
** File description:
** racine carré de nb
*/

int my_compute_square_root(int nb)
{
	int i = 0;
	int result;

	do {
		result = my_compute_power_rec(i, 2);
		i++;
	} while (result < nb);
	if (result == nb)
		return (i - 1);
	return (0);
}
