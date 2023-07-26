#include "sort.h"
/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
int aux = 0, aux2 = 0;
size_t  i = 0, j = 0;

if (array == NULL || size == 0)
return;
while (i < size)
{
aux = array[i];
aux2 = j = i + 1;
while (j < size) 
{
if (aux > array[j])
{
aux = array[j];
aux2 = j;
}
j++;
}
if (aux != array[i])
{
array[aux2] = array[i];
array[i] = aux;
print_array(array, size);
}
i++;
}
}
