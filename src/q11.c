// Write a C expression that performs the following operations in a single line: increment a variable by 1, multiply it by 3, and subtract 10.
#include<stdio.h>
int main(){
    int a, results;
    printf("enter an integer: ");
    scanf("%d", &a);
    results= (a++) *3 -10;
    printf("%d", results);
   
}