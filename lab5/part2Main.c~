#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

int main(int argc, char * argv[])
{
  int ch, count[26], i;

  //Initializes all alphabets the value of count = 0
  for (i = 0; i < 26; i++) { 
  
    count[i] = 0; 

  }

  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/')) {
	
     continue; 

  } else { 

    if (ch == '<') { 

       int nextChar = getchar(); 
       
	if (isalpha(nextChar)) { 
	  
           push(nextChar);
           count[nextChar - 'a'] = count[nextChar - 'a'] + 1; 
 
	} else if (nextChar == '/') {

	    int popped = pop(); 
            int nextChar2 = getchar(); 

              if (!(popped == nextChar2)) { 
	         
		 fprintf(stdout, "\n"); 
    		 fprintf(stdout, "Invalid"); 
	         exit(1); 

  	      } else { 

		 continue; 
		
	      }
           }
        }
      continue; 
    }     
  }

  if (isEmpty() == 0) { 
    
    fprintf(stdout, "\n"); 
    fprintf(stdout, "Invalid"); 
    exit(1); 
  
  } else {
   
    fprintf(stdout, "\n"); 
    fprintf(stdout, "Valid"); 

    for (i = 0; i < 26; i++) { 
	
	if (count[i] > 0) {
 
	   fprintf(stdout, "\n"); 
	   fprintf(stdout, "%c %d ", 'a' + i, count[i]); 
	}
    }
	  
    exit(0);

  } 
    
  exit(0);
}
