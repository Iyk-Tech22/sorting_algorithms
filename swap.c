#include "sort.h"

/**
 * swap - Swap two value in array
 * @array: Array data structure
 * @idx_1: First value index
 * @idx_2: Second value index
 */
void swap(int *array, int idx_1, int idx_2)
{
    int temp;
    temp = array[idx_1];
    array[idx_1] = array[idx_2];
    array[idx_2] = temp;
}