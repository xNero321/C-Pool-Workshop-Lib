/*
** EPITECH PROJECT, 2017
** my_compute_power_it.c
** File description:
** Mettre a la puissance p une valeur n en récursif
*/

int my_compute_power_rec(int nb, int p)
{
	int result = 0;

	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	result = nb * (my_compute_power_rec(nb, p - 1));
	return (result);
}
