/*
** EPITECH PROJECT, 2017
** my_sort_int_array.c
** File description:
** ordre croissant
*/

void my_sort_int_array(int *array, int size)
{
	int i = 0;
	int tmp = 0;

	while (i < size) {
		if (array[i] > array[i + 1]) {
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}
