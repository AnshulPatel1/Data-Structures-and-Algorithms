#include "mySort.h"



void mySort(int array[], unsigned int first, unsigned int last) {

	int i, j, n; 
	n = last - first; 

	for (i = 1; i <= n; i++) {
		
		j = i;
	
		while (j>0 && myCompare(array[first + j],array[first+j-1])<0) {
					
			mySwap (&array[first+j-1], &array[first + j]);
			j--;
		}

	}  
}
