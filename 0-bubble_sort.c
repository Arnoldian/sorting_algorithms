#include "sort.h"

/**
 * swap_ints - flip 2 ints in array
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
 * bubble_sort - ints arr in ascend. order sort
 * @array: arr of ints before sort
 * @size: array
 * Return: no return statement
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, length = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		length--;
	}
}
