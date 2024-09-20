/* Nested loop in C program 
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>
 
int main(){

  int i, j, nested = 1;            // declaration and initialization of variable
  
  for(i=0;i<10;i++)               // outer loop: iterates from 0 to 9 and nested got incremented by 1 for   each iteration
          {
           for(j=0;j<nested;j++) // inner loop: iteration depends on the 'nested' value
               {
                  printf("*");   // print the asterisks
               }
  printf("\n");                 // cursor moves to next line for each iteration
  nested++;                     // nested got incremented by 1
  }
return 0;
}
