/* for loop program in C 
written by K.Pradheepkumar dated 10-09-2024 */

#include<stdio.h>

int main(){
   int a, b=0;                      // declaration and initialization of variable
   printf("Enter the number : ");
   scanf("%d",&a);

   for(b=0;b<a;b++){               // loop runs until the b is less than a, in each loop b got incremented by 1
     printf("%d", b);
     }
   return 0;

}
