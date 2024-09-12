/* Pointers in C program
   written by K.Pradheepkumar dated 12-09-2024 */

#include<stdio.h>

int main(){
    int a = 5;
    int *ptr;  // Created a pointer variable named as ptr
   
    ptr = &a;  // The adress of the integer datatype a is assigned to ptr
    
    printf("The value of a : %d \n", a);        // The value of variable 'a' is printed as output
    printf("The value of ptr : %d \n", *ptr);   // The value stored by the 'ptr' variable is printed as output
    printf("The address of *ptr : %p \n", &ptr); // The address of the '*ptr' variable is printed as output
    printf("The address of a : %p \n", &a);     // The address of the variable 'a' is printed as output
    printf("The address of ptr : %p \n", ptr);      // This address is same as the address of the variable 'a' bcouz of "ptr = &a 
 }