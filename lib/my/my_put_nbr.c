/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** Display a number
*/

void overflow_fix(int nb);

void my_put_nbr(int nb)
{
	int mod = 0;

	if (nb == 2147483648 || nb == -2147483648) {
		overflow_fix(nb);
		return;
	}
	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0) {
		if (nb >= 10) {
			mod = (nb % 10);
			nb = (nb - mod) / 10;
			my_put_nbr(nb);
			my_putchar(48 + mod);
		}
		else
			my_putchar(48 + nb % 10);
	}
}

void overflow_fix(int nb)
{
	if (nb == 2147483648) {
		my_putstr("2147483648");
		return;
	}
	if (nb == -2147483648) {
		my_putstr("-2147483648");
		return;
	}
}
