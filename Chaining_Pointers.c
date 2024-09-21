/* Chain of Pointers in C
   written by K.Pradheepkumar dated 21-09-2024 */

#include<stdio.h>

int main(){

	int a = 17;             // Declaration and initialization of variable
	
	int *ptr = &a;
	int **ptr2 = &ptr;
	int ***ptr3 = &ptr2;

	printf("a = %d\n", *ptr);     // Dereferencing a
	printf("a = %d\n", **ptr2);   // Double dereferencing b
	printf("a = %d", ***ptr3);  // Triple dereferencing c

	return 0;
	}
