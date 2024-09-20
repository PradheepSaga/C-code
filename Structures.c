/* Structures in C program
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>
#include<string.h>

struct profile{          // structure named as profile
	char string[20];       // naming as 'string' and declared the size '20' of the character array
	int age ;              // naming the integer datatype as 'age'
	char intro[50];        // naming as 'intro' and declared the size '50' of the character array
	};

int main(){
     struct profile a1;        // declaring a variable for the structure
     struct profile a2;        // declaring another variable for the structure

     strcpy(a1.string, " K.Pradheepkumar"); // 'strcpy' is used to copy the string " K.Pradheepkumar" into the string field of a1
     a1.age = 23;                           // '23' is directly assigned to age field of a1
     strcpy(a1.intro, "An Electronics and Communication Engineer"); // copies provided string to the intro field of a1


	a2 = a1;              // a1 is copied to a2

	printf("%s\n %d\n %s", a1.string, a1.age, a1.intro);
        printf("%s\n %d\n %s", a2.string, a2.age, a2.intro);

     return 0;

}
     
