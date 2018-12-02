/*
 * selectionSort.c
 *
 *  Created on: Dec 2, 2018
 *      Author: simon
 */
// https://www.geeksforgeeks.org/selection-sort/

// C program for implementation of selection sort
#include <stdio.h>
#include "../inc/ArrayHelperFunctions.h"

void selectionSort(int unsorted[], int size)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < size-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < size; j++)
          if (unsorted[j] < unsorted[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&unsorted[min_idx], &unsorted[i]);
    }
}
