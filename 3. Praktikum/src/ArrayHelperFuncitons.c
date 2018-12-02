#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void printArrayInt(int array[], int size, char seperator){
	for(int i = 0; i < size; i++){
		printf(" %d %c", array[i], seperator);
	}
	printf("\n");
}

void initOrderedArrayInt(int array[], int size){
	for(int i = 0; i < size; i++){
		array[i] = i;
	}
}

void initReverseArrayInt(int array[], int size){
	for(int i = 0, t = size; i < size; i++, t--){
		array[i] = t;
	}
}

void initRandomArrayInt(int array[], int size){
	time_t t;
	/* Initializing random number generator */
	srand((unsigned) time(&t));
	for(int i = 0; i < size; i++){
		array[i] = rand();
	}
}

void copyArrayInt(int target[], int source[], int size){
	for(int i = 0; i < size; i++){
		target[i] = source[i];
	}
}

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
