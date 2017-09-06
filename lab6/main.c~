#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int); 
extern int heapDelete(); 
extern void addHeap(int); 
extern int heapSize(); 
extern void printHeap(int);  


int main(int argc, char * argv[])
{
 
 	int value, i, heap_size, push_to_stack;
	
	printf("Type in Ctrl-D to get results when you finish all input.  Type in integers only.\n"); 
	
 	while (scanf("%d", &value) != EOF)	{

		printf("\n");
		printf("READING INPUT: %d\n", value);      
   		addHeap(value); 

 	}

	
	printf("\n");
	printHeap(0); 
	
	printf("\n");

	heap_size = heapSize();
	for (i=0; i <= heap_size; i++)		{

		push_to_stack = heapDelete();  
		printf("%d\n", push_to_stack); 
		push(push_to_stack); 
	}

	printf("\n");

	for (i=0; i <= heap_size; i++)	{

		printf("%d\n",pop());
	}

	printf("\n");

 	exit(0);
}
