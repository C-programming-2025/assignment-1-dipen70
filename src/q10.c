#include<stdio.h>
int main(){
    int x,y,temp;
    printf("enter value of x and y:");
    scanf("%d %d",&x,&y);
    printf("before swap value: x=%d y=%d",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("\nafter swap value: x=%d y=%d",x,y);
}