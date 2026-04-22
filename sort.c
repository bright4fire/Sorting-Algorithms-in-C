#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void random_array(int [], int);
void print_unsorted(int [], int);
void print_sorted(int [], int);

void random_array(int array[], int size)
{
	srand(time(NULL));

	for (int i = 0; i < size; i++) 
		array[i] = rand() % 101;
	return;
}

void print_unsorted(int array[], int size)
{
	printf("Unsorted: \t");
	for (int i = 0; i < size; i++) 
		printf(" %d", array[i]);
	printf("\n");
	return;
}

void print_sorted(int array[], int size)
{
	printf("Sorted: \t");
	for (int i = 0; i < size; i++) 
		printf(" %d", array[i]);
	printf("\n");
	return;
}
