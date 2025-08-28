#include<stdio.h>
int main(){
    int num1,num2,num3;
    int sq_sum;
    printf("enter any 3 integers:");
    scanf("%d %d %d", &num1,&num2,&num3);
    sq_sum= (num1*num1)+(num2*num2)+(num3*num3);
    printf("sum of squares = %d",sq_sum);
}