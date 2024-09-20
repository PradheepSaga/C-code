/* Identifying the strong number using C program
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>

int main(){
   
	int n, q, fact = 1, result = 0, i, rem; // Declaration and initialization of variable

	printf("Enter the number : ");
	scanf("%d", &n);

	q = n;                              // Assigning n is equal to q                        

	while(q != 0){
		rem = q %10;                // Extract the last digit
		for(i = 1; i <= rem; i++){
			fact = fact * i;    // compute factorial of the digit
			}
		result += fact;             // Add the factorial to the result
		fact = 1;                   // Reset factorial for the next digit
		q /= 10;                    // Remove the last digit
		}

	if(result == n)
		printf("The given number is a strong number", n);
	else
		printf("The given number is not a strong number", n);
	return 0;
	}
