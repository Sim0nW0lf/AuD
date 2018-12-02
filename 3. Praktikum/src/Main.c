#include <time.h>
#include <stdio.h>
#include "../inc/ArrayHelperFunctions.h"
#include "../inc/SelectionSort.h"
#include "../inc/InsertionSort.h"
#include "../inc/MergeSort.h"
#include "../inc/QuickSort.h"
#include "../inc/HeapSort.h"

#define NUMBER_COUNT 120000

void orderedSortTest(long double *selectionTime, long double *insertionTime, long double *mergeTime, long double *quickTime, long double *heapTime){
	int arrToSort[NUMBER_COUNT];
	clock_t clock_t;

	initOrderedArrayInt(arrToSort, NUMBER_COUNT);

	clock_t = clock();
	selectionSort(arrToSort, NUMBER_COUNT);
	*selectionTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	clock_t = clock();
	insertionSort(arrToSort, NUMBER_COUNT);
	*insertionTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	clock_t = clock();
	mergeSort(arrToSort, NUMBER_COUNT);
	*mergeTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	clock_t = clock();
	quickSort(arrToSort, NUMBER_COUNT);
	*quickTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	clock_t = clock();
	heapSort(arrToSort, NUMBER_COUNT);
	*heapTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;
}

void reverseSortTest(long double *selectionTime, long double *insertionTime, long double *mergeTime, long double *quickTime, long double *heapTime){
	int arrToSort[NUMBER_COUNT], reverseArray[NUMBER_COUNT];
	clock_t clock_t;

	initReverseArrayInt(reverseArray, NUMBER_COUNT);
//	printArrayInt(reverseArray, NUMBER_COUNT, '|');

	copyArrayInt(arrToSort, reverseArray, NUMBER_COUNT);
	clock_t = clock();
	selectionSort(arrToSort, NUMBER_COUNT);
	*selectionTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	copyArrayInt(arrToSort, reverseArray, NUMBER_COUNT);
	clock_t = clock();
	insertionSort(arrToSort, NUMBER_COUNT);
	*insertionTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	copyArrayInt(arrToSort, reverseArray, NUMBER_COUNT);
	clock_t = clock();
	mergeSort(arrToSort, NUMBER_COUNT);
	*mergeTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	copyArrayInt(arrToSort, reverseArray, NUMBER_COUNT);
	clock_t = clock();
	quickSort(arrToSort, NUMBER_COUNT);
	*quickTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	copyArrayInt(arrToSort, reverseArray, NUMBER_COUNT);
	clock_t = clock();
	heapSort(arrToSort, NUMBER_COUNT);
	*heapTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;
}

void randomSortTest(long double *selectionTime, long double *insertionTime, long double *mergeTime, long double *quickTime, long double *heapTime){
	int arrToSort[NUMBER_COUNT], randomArray[NUMBER_COUNT];
	clock_t clock_t;

	initRandomArrayInt(randomArray, NUMBER_COUNT);

	copyArrayInt(arrToSort, randomArray, NUMBER_COUNT);
	clock_t = clock();
	selectionSort(arrToSort, NUMBER_COUNT);
	*selectionTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	copyArrayInt(arrToSort, randomArray, NUMBER_COUNT);
	clock_t = clock();
	insertionSort(arrToSort, NUMBER_COUNT);
	*insertionTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	copyArrayInt(arrToSort, randomArray, NUMBER_COUNT);
	clock_t = clock();
	mergeSort(arrToSort, NUMBER_COUNT);
	*mergeTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	copyArrayInt(arrToSort, randomArray, NUMBER_COUNT);
	clock_t = clock();
	quickSort(arrToSort, NUMBER_COUNT);
	*quickTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;

	copyArrayInt(arrToSort, randomArray, NUMBER_COUNT);
	clock_t = clock();
	heapSort(arrToSort, NUMBER_COUNT);
	*heapTime = ((long double)(clock() - clock_t)) / CLOCKS_PER_SEC;
}

int main(void){
	long double
	selectionTimeOrdered, insertionTimeOrdered, mergeTimeOrdered, quickTimeOrdered, heapTimeOrdered,
	selectionTimeReverse, insertionTimeReverse, mergeTimeReverse, quickTimeReverse, heapTimeReverse,
	selectionTimeRandom, insertionTimeRandom, mergeTimeRandom, quickTimeRandom, heapTimeRandom;

	printf("Unit: Seconds	| Selection Sort	| Insertion Sort	| Merge Sort		| Quick Sort		| Heap Sort\n");
//	printf("Ordered Sort Test: ");
	orderedSortTest(&selectionTimeOrdered, &insertionTimeOrdered, &mergeTimeOrdered, &quickTimeOrdered, &heapTimeOrdered);
	printf("Ordered Array:	| %Lf		| %Lf		| %Lf		| %Lf		| %Lf		\n", selectionTimeOrdered, insertionTimeOrdered, mergeTimeOrdered, quickTimeOrdered, heapTimeOrdered);
//	printf("Done!\n");
//	printf("Reverse Sort Test: ");
	reverseSortTest(&selectionTimeReverse, &insertionTimeReverse, &mergeTimeReverse, &quickTimeReverse, &heapTimeReverse);
	printf("Reverse Array:	| %Lf		| %Lf		| %Lf		| %Lf		| %Lf		\n", selectionTimeReverse, insertionTimeReverse, mergeTimeReverse, quickTimeReverse, heapTimeReverse);
//	printf("Done!\n");
//	printf("Random Sort Test: ");
	randomSortTest(&selectionTimeRandom, &insertionTimeRandom, &mergeTimeRandom, &quickTimeRandom, &heapTimeRandom);
	printf("Random Array:	| %Lf		| %Lf		| %Lf		| %Lf		| %Lf		\n", selectionTimeRandom, insertionTimeRandom, mergeTimeRandom, quickTimeRandom, heapTimeRandom);
//	printf("Done!\n\n");


	return 0;
}
