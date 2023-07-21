#include "sort.h"


/**
 * bubble_sort - Bubble sorts an array.
 *
 * @array: The array to be sorted.
 * @size: The size of the array.
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j = 0;
	int tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}


int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}