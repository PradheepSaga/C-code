/* Identify the power of an integer for both positive and negative Exponents using C program
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>

int main(){

	int base, exponent, expo, power = 1 ;  // Declaration and initialization of variable
	double power1= 1.0;                    

	printf("Enter the base : ");
	scanf("%d", &base);

	printf("Enter the exponent : ");
	scanf("%d", &exponent);

	expo = exponent;                     // Exponent value gets copied into expo

	if(exponent > 0){                    // For positive exponent 
	
		while(exponent != 0){              // iterates until exponent becomes equal to '0'
			power *= base;
			exponent--;                      // Exponent gets incremented for each iteration
			}
		printf("The %d to the power of %d is the %d", base, expo, power);
		}
	else{                                // For negative exponent
		while(exponent != 0){              // iterates until exponent becomes equal to '0'
			power1 *= (1.0/base);
			exponent++;                      // Exponent gets decremented for each iteration
			}	
		printf("The %d to the power of %d is the %.10f", base, expo, power1);
		}
	return 0;
	}
