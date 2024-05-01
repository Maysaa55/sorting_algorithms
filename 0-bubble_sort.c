#include "sort.h"


/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: data to sort
 * @size: size of data
 *
 * Return: No Return
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
if (size < 2)
	exit(0);
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j+1];
array[j+1] = temp;
print_array(array, size);
}
}
}
}
