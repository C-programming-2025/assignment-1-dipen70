// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator).
#include<stdio.h>
int main(){
    int n, result;
    printf("enter an integer:");
    scanf("%d",&n);
    result= (n/2)*2==n && (n/3)*3==n;
    printf("%d",result); // if prints 1 then true num is divisible by both 2 and 3
    return 0;
}