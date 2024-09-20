/* Identify the Prime number using C program
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>
#include<math.h>

int main(){
	
	int i, n, val1, val2, count = 0;      // Declaration and initialization of variable
	printf("Enter the number : ");
	scanf("%d", &n);

	val1 = ceil(sqrt(n));                // Performs the square root of 'n' and rounds the value
	val2 = n;                            // Value of 'n' copied to val2

	for(i = 2; i <= val1; i++){          // Iterates upto divisible integers 
		if(val2 % i ==0)                   // Extracts the remainder and checks remainder is = '0'
		count = 1;                         // If it is divisible then count gets equal to 1
		} 

	if((count == 0 && val2 != 1) || val2 ==2 || val2 ==3) 
		printf("The given number is a prime number", n);
	else
		printf("The given number is not a prime number", n);
	return 0;
	}
