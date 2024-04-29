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
void selection_sort(int *array, size_t size){
size_t i, j;
int min, index, temp;
for(i = 0; i < size; i++){
	min = array[i];
for(j = i+1; j < size; j++){
if(array[j]<min){
	min = array[j];
	index = j;
}
}
if(min == array[i])
	return;
temp = array[i];
array[i] = min;
array[index] = temp;
print_array(array, size);
}
}
