#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a variable ");
    scanf("%d", &a);
    printf("Enter b variable ");
    scanf("%d", &b);
    printf("Before swapping the variable a is %d and b is %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping the variable a is %d and b is %d",a,b);
    return 0;
}