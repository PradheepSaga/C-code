/* dowhile loop in C program 
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>

int main(){
   int i, a=0;                     // declaration and initialization of variable
   printf("Enter the number :");
   scanf("%d", &i);

   if(i<1){                       // if the value of 'i' is less than '1' execute the below statement
	printf("The given input is Invalid");
	return 0;
	}

   do{
	printf("The number series : %d\n", a++);
	}while(a<i);              // loop runs until 'a' is less than 'i' and increments a by 1

   return 0;
}
