/* printing Date_Time using C program 
   written by K.Pradheepkumar dated 20-09-2024 */

#include<stdio.h>

int main(){
      printf("Date : %s\n", __DATE__);  //__DATE__ : predefined MACRO in C expands the current date 
      printf("Time : %s\n", __TIME__);  //__TIME__ : predefined MACRO in C expands the current time
return 0;
}
