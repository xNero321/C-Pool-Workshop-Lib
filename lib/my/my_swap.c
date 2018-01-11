/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** swap integers
*/

void my_swap(int *a, int *b)
{
	int var_x;

	var_x  = *a;
	*a = *b;
	*b = var_x;
}
