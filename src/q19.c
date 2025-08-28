#include<stdio.h>
int main(){ 
    int a, b, c, result;
    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);
    result=(a == b && b != c);
    printf("%d",result); // prints 1 if a equals b and b does not equal c, otherwise prints 0
    return 0;
}