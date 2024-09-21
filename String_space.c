/* Reading characters with white space of string in C
   written by K.Pradheepkumar dated 21-09-2024 */

#include<stdio.h>

int input(char str[], int n){

	int ch, i=0;                   // Declaration and initialization of variable
	printf("Enter the string: ");
	while((ch=getchar()) !='\n')  // loop iterates until newline is encountered
		if(i < n)             // It read the input characters upto '20'  
		   str[i++] = ch;    // Stores the character and incremented to next index 
	str[i] = '\0';               // It ends the string
	return i;                    // Returns the no. of characters that stored in the string
	}

int main(){
	
	char str[100];           // Declaration of character array with size
	int n = input(str, 20);  // Calls the input function
	printf("The given string: ");
	printf("%d %s", n, str); // 'n' number of characters followed by the string itself
	return 0;
	}