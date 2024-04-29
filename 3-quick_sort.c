#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 *  order using the Selection sort algorithm
 *
 * @array: data to sort
 * @size: size of data
 *
 * Return: No Return
 */
void quick_sort(int *array, size_t size)
{
size_t i, j;
int min, index, temp, count;
if (size == 2)
{
	print_array(array, size);
	exit();
}
for (i = 0; i < size - 1; i++)
{
	min = array[i];
	count = 0;
for (j = i + 1; j < size; j++)
{
if (array[j] < min)
{
	min = array[j];
	index = j;
	count++;
}
}
if (count != 0)
{
temp = array[i];
array[i] = min;
array[index] = temp;
print_array(array, size);
}
}
}

