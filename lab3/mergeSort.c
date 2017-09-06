#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last) {

	int x, y, k, middle; 
	int left[1000], right[1000]; 
	
	if(first<last) {

		middle = (first+last-1)/2;
		mySort(array, first, middle);
		mySort(array, middle+1, last);
		

		for(x = 0; x <= (middle-first); x++){
			left[x] = array[x+first];
		}

		for(y = 0; y < (last-middle); y++){
			right[y] = array[middle+y+1];
		}

		left[middle-first+1] = 1000000;
			

		right[last-middle] = 1000000;
		

		x = 0, y = 0;
		
		//For loop which merges the two child arrays into parent array 
		for(k = first; k <= last; k++) {

			if(myCompare(left[x],right[y]) <= 0) {
				myCopy(&left[x], &array[k]);
				x++;
				
			}

			
			else if(myCompare(right[y],left[x]) <= 0) {
				myCopy(&right[y], &array[k]);
				y++;
				
			}
		}
	}
    }


