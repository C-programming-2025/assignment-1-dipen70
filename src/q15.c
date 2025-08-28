#include<stdio.h>
int main(){
    int num, result;
    printf("enter a number: ");
    scanf("%d", &num);
    result = (num%2==0)&& (num>0); // number is both positive and even if prints 1
    printf("%d",result);
    return 0;
}