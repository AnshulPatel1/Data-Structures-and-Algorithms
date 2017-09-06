#include <stdio.h> 

void mySort(int d[], unsigned int n) {

int i,j;
 
for( i=0; i < n; i++){

     int minNum = i; 

     for( j=i+1; j < n; j++){

       if(d[j] < d[minNum]){
         minNum = j;
       }
     }

     if(minNum != i){
        int temp = d[i];
        d[i] = d[minNum];
        d[minNum] = temp;
     }

   }

}
