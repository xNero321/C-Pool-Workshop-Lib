/*
** EPITECH PROJECT, 2017
** my_find_prime.c
** File description:
** find prime > n
*/

int my_find_prime_sup(int nb)
{
	int i = nb;

	while (my_is_prime(i) == 0)
		i++;
	return (i);
}
