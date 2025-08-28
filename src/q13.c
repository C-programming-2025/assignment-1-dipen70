#include<stdio.h>
int main(){
    int n, result;
    printf("enter an integer:");
    scanf("%d",&n);
    result= (n/2)*2==n && (n/3)*3==n;
    printf("%d",result); 
    return 0;
}