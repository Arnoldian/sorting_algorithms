#include "sort.h"

/**
 * swap_ints - flip 2 ints in arr
 * @a: 1st int 2 flip
 * @b: 2nd int 2 flip
 */

void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sort arr of ints in asc. order
 * @array: of ints
 * @size: of arr
 * Return: no return statement
 */

void selection_sort(int *array, size_t size)
{
	int *minima;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minima = array + i;
		for (j = i + 1; j < size; j++)
		{
			/* tenary operator for if else */
			minima = (array[j] < *minima) ? (array + j) : minima;
		}

		if ((array + i) != minima)
		{
			swap_ints(array + i, minima);
			print_array(array, size);
		}
	}
}
