#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

static int key = -1;
int heap[100];

/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()	{

  return key;	
}


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */
int heapDelete() {
  
  int max,temp,i;
  max = heap[0];

  for(i = 0; i <= key; i++){

   if(max < heap[i]){

     max = heap[i];
   }
  }

  for(i = 0;i <= key; i++){

   if(max == heap[i]){

    break;

   }
  }

  temp = heap[i];
  heap[i] = heap[key];
  heap[key] = temp;
  key--;

  return max;
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
  int p,temp;
  key++;
  p = key;
  heap[key] = thing2add;

  while(p > 0 && heap[((p-1)/2)] < heap[p]){

   temp = heap[p];
   heap[p] = heap[((p-1)/2)];
   heap[((p-1)/2)] = temp;
   p = ((p-1)/2);

  }
}

/** 
 *Prints the heap out. 
 */
void printHeap(int i)	{

  int temp;
  printf("\n");

  if(i <= key) {

  for(temp = (1+i)/2; temp > 0; temp--){

   printf("\t");

  }

  printf("<node id=%c%d%c>",34,heap[i],34);

  if((i*2)+1<=key){
		
   printHeap((i*2)+1);
			
  }

  if((i*2)+2<=key){
		
   printHeap((i*2)+2);
			
  }

  for(temp=(1+i)/2;temp>0;temp--){

   if((i*2)+1<=key||(i*2)+2<=key){

     printf("\t");

   }
  }

  printf("</node>");

  }

  printf("\n");
}


