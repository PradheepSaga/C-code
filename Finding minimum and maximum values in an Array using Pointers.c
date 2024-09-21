/* Identifying the smallest and largest number in an array using pointers in C
   written by K.Pradheepkumar dated 21-09-2024 */

#include<stdio.h>

void minmax(int a[], int len, int *min, int *max){

	*min = *max =a[0];                       // *min and *max is initialized to the first element of array
	
	int i;
	for(i=1; i<len; i++){                   // If 'a[i]' less than 'min', it will updates *min to a[i] 
		if(a[i]<*min)
			*min = a[i];
		if(a[i]>*max)                   // If 'a[i]' greater than 'max', it will updates *max to a[i]
			*max = a[i];
		}
	}

int main(){
 
	int a[] = {2, 4, 5, 6};                  // Defined the array without size 
	int min, max;

	int len = sizeof(a) / sizeof(a[0]);     // Finding the size by dividing the size of entire array in bytes to the size of elements of an array
	
	minmax(a, len, &min, &max);             // Calling the function minmax
	
	printf("Minimum value in the array is: %d and Maximum value in the array is: %d", min, max);
	return 0;
	}
	


     
