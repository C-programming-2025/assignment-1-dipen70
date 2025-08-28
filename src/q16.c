#include<stdio.h>
int main(){
    int x,y;
    float average;
    printf("enter value of x and y:");
    scanf("%d %d",&x,&y);
    average=(x+y)/2;
    printf("the average of x and y is:%f",average);
    return 0;
}