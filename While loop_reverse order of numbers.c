/* While loop in C program : printing order of numbers using decrement operator
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>

int main(){

   int queue = 100;              // declaration and initialization of variable

   while(queue > 0){             //if the value of queue is greater than 0 loop iteration begins
	printf("%d\t", queue);
        queue --;               // after printing the value of queue it decrements to -1
	}
   return 0;                    
}
