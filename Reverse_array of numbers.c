/* Reversing an array of numbers in C program
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>

int main(){
   
	int arr[6];                              // Declaring the array size as '6'
	int i;                                   // Declaration of variable 'i'

	for(i=0; i<6; i++){                      // Iterates until 'i' less than '6' and increments 'i' by '1'
	printf("Enter the array of number : "); 
	scanf("%d", &arr[i]);
	}

	for(i=0; i<6; i++){
		printf("%d\t", arr[i]);          // Print array of numbers in order
		}

		printf("\n\n");

	for(i=5; i>=0; i--){                    // Iterates until 'i' greater than equal to '0' and decrement by '1'
		printf("%d\t", arr[i]);         // Print array of numbers in reverse order
		}
	return 0;
	}
