/* Identify the perfect number using c program
   written by K.Pradheepkumar dated 20-09-2024 */

/* Perfect number: 'a positive integer that is equal to the sum of its positive proper divisors' */

#include<stdio.h>

int main(){

     int rem, sum = 0, i, number;         // Declaration and initialization of variable

	printf("Enter the number : ");
	scanf("%d", &number);

	for(i=1; i<number; i++){         // loop counts until 'i' less than 'number' and 'i' gets incremented by '1'
		rem = number % i;              // Extract the remainder of the 'number' divided by 'i'
	if(rem == 0){                    // If remainder is '0' , it is a divisible integer of 'number' then begin the iteration of the loop
		sum = sum + i;                 // 'Sum' stores the sum of divisors
		}
	}
	if(sum == number) printf("The %d is perfect number", number);
	else printf("The %d is not a perfect number", number);
	return 0;
	}
