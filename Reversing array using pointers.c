/* Reversing array using pointers
   written by K.PradheepKumar dated 21-09-2024 */

#include<stdio.h>

int main(){

	int a[] = {2,4, 6, 8, 12, 24, 26};     // Defining the array
	int sum=0, *p;                         // Declaration and initialization of variable

	
	int len = sizeof a / sizeof a[0];      // Find the length of the array
	printf("Length of the array: %d\n",len);

	printf("Order of array:");
	for(p=&a[0]; p<&a[len]; p++)          // Iterates until the value of variable 'p' becomes less than variable 'len'
		                  
	printf(" %d", *p); 
	printf("\n");

	printf("Reverse order of array:");
	for(p=&a[len-1]; p>=&a[0]; p--)          // Iterates until the value of variable 'len' becomes greater than or equal to variable 'a[0]'
		                  
	printf(" %d", *p);                       // Prints reverse order of array integers

	return 0;

	                  
	}
