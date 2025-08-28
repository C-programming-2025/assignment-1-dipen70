// Given a variable num, write an expression that checks if it is a power of 2.
#include<stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int result = (num > 0) && ((num & (num - 1)) == 0);
    printf("%d", result); // prints 1 if num is a power of 2, otherwise prints 0
    return 0;
}