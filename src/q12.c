// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.
#include<stdio.h>
int main(){
    int a,b, c, result1, result2;
    printf("enter a, b, c:");
    scanf("%d %d %d", &a,&b,&c); 
    result1 = (a>b)&& (a>c);
    printf("%d",result1); // if prints 1 then true a greater than b and c
    result2= (c!=0);
    printf("\n%d", result2); // if prints 1 then true c is not 0 
    return 0;
}