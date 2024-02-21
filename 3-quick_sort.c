#include "sort.h"

void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swap_ints - flip 2 ints in an array
 * @a: 1st int
 * @b: 2nd int
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - order subset of ints array
 * @array: of ints
 * @size: of arr
 * @left: start index of subset to order
 * @right: end index of subset 2 order
 * Return: last part. index
 */

int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *swivel, top, bottom;

	swivel = array + right;
	for (top = bottom = left; bottom < right; bottom++)
	{
		if (array[bottom] < *swivel)
		{
			if (top < bottom)
			{
				swap_ints(array + bottom, array + top);
				print_array(array, size);
			}
			top++;
		}
	}

	if (array[above] > *swivel)
	{
		swap_ints(array + top, swivel);
		print_array(array, size);
	}

	return (top);
}

/**
 * lomuto_sort - quicksort algorithm using recursion
 * @array: of ints (2 sort)
 * @size: of arr
 * @left: start index of arr partition 2 order
 * @right: end index of arr partition 2 order
 * Return: no return statement
 */

void lomuto_sort(int *array, size_t size, int left, int right)
{
	int section;

	if (right - left > 0)
	{
		section = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, section - 1);
		lomuto_sort(array, size, section + 1, right);
	}
}

/**
 * quick_sort - sort arr of ints in asc. order
 * @array: of ints
 * @size: of arr
 * Return: no return statement
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	lomuto_sort(array, size, 0, size - 1);
}
