/*
** EPITECH PROJECT, 2017
** my_is_prime.c
** File description:
** Tout nombre premier
*/

int my_is_prime(int nb)
{
	int i = 2;

	if (nb == 1 || nb <= 0)
		return (0);
	while (i < nb) {
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
