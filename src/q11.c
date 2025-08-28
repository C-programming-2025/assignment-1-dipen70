#include<stdio.h>
int main(){
    int a, results;
    printf("enter an integer: ");
    scanf("%d", &a);
    results= ((a++) *3 )-10;
    printf("%d", results);
   
}