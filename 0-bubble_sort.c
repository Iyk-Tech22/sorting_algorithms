#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

// protype functions
void swap(int *a, int *b);

/**
 * bubble_sort - it a comparison algorithm, that compare pairs of adjecent
 * @array: Is the Data Structure to sort\
 * @size: Size of the Data Structure
 */
void bubble_sort(int *array, size_t size)
{
    // create a variable
    int i, j, is_swap;

    // if size is <= 2 break
        if (size <= 2)
            return;
    // loop from i to the size of the array
    for (i = 1; i < size; ++i)
    {
        
        is_swap = 0;
        // loop from j to size-1
        for (j = 0; j < size-1-i; ++j)
        {
            // if elem at j < j+1
            if (array[j] > array[j+1])
            {
                // swap
                swap(array[j], array[j+1]);
                // set is_swap to 1
                is_swap = 1;
            }
        }
        // if is_swap is not 1 break from the loop
        if (is_swap == 0)
            return;
        // print array after every swap
        print_array(array, size);
        printf("\n");
    }
}

/**
 * swap - Swap two value in array
 * @array: Array data structure
 * @idx_1: First value index
 * @idx_2: Second value index
 */
void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *a = *b;
    b = temp;
}
