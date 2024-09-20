/* Arithmetic operations between unsigned integer and signed integer in C program
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>

int main(){

   unsigned i = 4;     // declared as an unsigned integer and initialized with value 4
   int j = -5;         // declared as a signed integer and initialized with value -5

   printf("%u", i+j); // 4 + (-5)=-1 -> represented as 4294967295 due to unsigned value
   return 0;
}
