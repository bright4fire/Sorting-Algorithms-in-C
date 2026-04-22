/*
 * Sort: Selection Sort.
 * Author: bright4fire
 * Date: 04/21/2026
 */

#include <stdio.h>
#include "sort.h"

int main(void)
{
	int arr_size = 10,
	    a[arr_size],
	    tmp, tmp2;

	random_array(a, arr_size);
	print_unsorted(a, arr_size);

	for (int i = 0; i < arr_size; i++) {
		tmp = i;
		for (int j = i; j < arr_size; j++) {
			if (a[j] < a[tmp])
				tmp = j;
		}
		tmp2 = a[i];
		a[i] = a[tmp];
		a[tmp] = tmp2;
	}

	print_sorted(a, arr_size);
}
	
