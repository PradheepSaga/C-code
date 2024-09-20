/* Displaying the size of datatype as output in c
  written by K.Pradheepkumar dated 10-09-2024 */

#include<stdio.h>

int main(){
  int no;           // variable declared as integer datatype
  float no1;        // variable declared as float datatype
  short int no2;    // variable declared as short integer datatype
  double no3;       // variable declared as double datatype
  char no4;         // variable declared as character datatype
  long int no5;     // variable declared as long integer datatype
  
printf(" The size of integer datatype is : %lu\n", sizeof(no));
printf(" The size of float datatype is : %lu\n", sizeof(no1));
printf(" The size of short int datatype is : %lu\n", sizeof(no2));
printf(" The size of double datatype is : %lu\n", sizeof(no3));
printf(" The size of char datatype is : %lu\n", sizeof(no4));
printf(" The size of long int datatype is : %lu\n", sizeof(no5));
return 0;
}
