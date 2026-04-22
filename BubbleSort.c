/*
 * Sort: Bubble Sort.
 * Author: bright4fire
 * Date: 04/21/2026
 */

#include <stdio.h>
#include "sort.h"

int main(void)
{
	int arr_size = 10,
	    a[arr_size],
	    tmp;

	random_array(a, arr_size);
	print_unsorted(a, arr_size);

	arr_size--;
	for (int i = 0; i < arr_size; i++) {
		for (int j = 0; j < arr_size - i; j++) {
			if (a[j] > a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	arr_size++;

	print_sorted(a, arr_size);
}

