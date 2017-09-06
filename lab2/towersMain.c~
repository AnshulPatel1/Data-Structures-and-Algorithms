#include <stdlib.h>
#include "towers.h"
#include <stdio.h> 

int main(int argc, char **argv)
{
    int n = 3;
    int from = 1;
    int dest = 2;

    if (argc == 2) {
	
	if ((atoi(argv[1])) > 0) {
        n = atoi(argv[1]);
	} else { 
	fprintf (stderr, "Invalid expression"); 
	exit(5); 
	} 

    } else if (argc == 4) { 

	int x = atoi(argv[1]); 
	int y = atoi(argv[2]); 
	int z = atoi(argv[3]); 

	if ((x > 0) && ((y >= 1) && (y <= 3)) && ((z >= 1) && (z <= 3))) { 
	n = x; 
	from = y; 
	dest = z; 
	} else { 
	fprintf(stderr, "Invalid expression"); 
	exit(5); 
	}

    } else if (argc == 1) { 

	towers(n, from, dest);
    	exit(0);
	
    }  else { 
	
	fprintf(stderr, "Invalid expression"); 
	exit(5); 
}

    towers(n, from, dest);
    exit(0);
}

