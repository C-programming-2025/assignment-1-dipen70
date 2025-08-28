#include<stdio.h>
int main(){
    int a,b, c, result1, result2;
    printf("enter a, b, c:");
    scanf("%d %d %d", &a,&b,&c); 
    result1 = (a>b)&& (a>c);
    printf("%d",result1); 
    result2= (c!=0);
    printf("\n%d", result2); 
}