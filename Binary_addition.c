/* Binary addition in C program
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>

int main(){

	int x , y, sum, carry ;                 // declaration of variable

	printf("Enter the value of x and y :");
	scanf("%d%d", &x,&y);

	while(y!=0){                           // iterates until y becomes 0
		sum = x^y;                     // performs binary addition 
		carry = (x&y)<<1;              // shift left if carry is detected
		x = sum;                       // update x
		y = carry;                     // update y
		}

	printf("The sum of x and y is : %d ", sum); //if y becomes 0 print the 'sum'
	return 0;
	}
