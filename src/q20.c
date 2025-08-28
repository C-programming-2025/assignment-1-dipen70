#include<stdio.h>
int main(){ 
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", &num);
    result = (num % 3 == 0 || num % 5 == 0);
    printf("%d", result); // prints 1 if num is a multiple of 3 or 5 for true
    return 0;
}