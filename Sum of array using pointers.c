/* Sum of elements of array using pointers
   written by K.PradheepKumar dated 21-09-2024 */

#include<stdio.h>

int main(){

	int a[] = {2,4, 6, 8, 12, 24, 26};     // Defining the array
	int sum=0, *p;                         // Declaration and initialization of variable

	
	int len = sizeof a / sizeof a[0];      // Find the length of the array
	printf("Length of the array: %d\n",len);

	for(p=&a[0]; p<&a[len]; p++)          // Iterates until the value of variable 'p' becomes less than variable 'len'
		sum  += *p;                        // 'Sum' stores the sum of array
		
	printf("Sum of array: %d", sum);                    
	}
