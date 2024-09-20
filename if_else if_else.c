/*if_ else if_ else condition in C program 
written by K.Pradheepkumar dated 10-09-2024 */

#include<stdio.h>

int main(){
  
  int no;                    // declaration of variable          
  printf("Enter the number : ");
  scanf("%d",&no);

  if(no>10){                    // if the condition is true print the below statement
     printf("The given number is higher than *10*\n");
     }
  if(no==10){                  // if the condition is true print the below statement 
     printf("The given number is equal to *10*\n");
     }
  else if(no<0){              // if the condition is true print the below statement 
     printf("The given number is negative!!");
     }
  else{                       // if none of the other conditions match execute the below statement
      printf("The given number is positive $");
    }
  return 0;
}
