#include<stdio.h>
int main(){
    int celsius, fahrenheit;
    printf("enter the temperature in celsius:");
    scanf("%d",&celsius);
    fahrenheit=((celsius * 9 / 5) + 32) ;
    printf("the temperature in fahrenheit is:%d",fahrenheit);
    return 0;
}