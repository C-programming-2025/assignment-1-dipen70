// Create an expression that swaps the values of two variables x and y without using a temporary variable.
#include<stdio.h>
int main(){
    int x,y;
    printf("enter value of x and y:");
    scanf("%d %d",&x,&y);
    printf("before swap value: x=%d y=%d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nafter swap value: x=%d y=%d",x,y);
}