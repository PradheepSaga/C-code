/* Pre and post increment , pre and post decrement operation in C
   written by K.Pradheepkumar dated 11-09-2024 */

#include<stdio.h>

int main(){
      int a = 10, y ,z ,u ,v ;
      
     y = ++a; //pre-increment operation * a = 10
     z = a++; //post increment operation * a = 11
     u = a--; //post decrement operation * a = 12
     v = --a; //pre-drecrement operation * a = 11
     
      printf("y = %d\n", y); //Output of pre-increment done by y
      printf("z = %d\n", z); //Output of post increment done by z 
      printf("u = %d\n", u); //Output of post-decrement done by u
      printf("v = %d\n", v); //Output of pre-decrement done by v 
       printf("a = %d\n", a);  //Output of given input variable a
      
      return 0;
}
