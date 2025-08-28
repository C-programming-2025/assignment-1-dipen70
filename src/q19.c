#include<stdio.h>
int main(){ 
    int a, b, c, result;
    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);
    result=(a == b && b != c);
    printf("%d",result); 
    return 0;
}