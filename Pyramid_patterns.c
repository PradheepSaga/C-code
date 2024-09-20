/* Pyramid patterns in C program
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>

int main(){
    
	int n, i, j;                           // Declaration of varaible

	printf("Enter the size of the pyramid : "); 
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){               // Loop for columns            
		for(j = 1; j <= 2*n-1; j++){         // Loop for rows and also controls the columns
			if(j >=n-(i-1) && j<=n + (i-1)){   // Both columns and rows are controlled by this loop
				printf("*");                     // Print Asterisks 
				}
			else{
				printf(" ");                     // print space 
				}
			}
			printf("\n");                      // Print new line for each iteration
		}
	return 0;
	}
