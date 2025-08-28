/* Write a C program to convert temperature from Celsius to Fahrenheit. Prompt the user for a
temperature in Celsius and display the equivalent temperature in Fahrenheit.
(Formula: fahrenheit = (celsius * 9 / 5) + 32) */
#include<stdio.h>
int main(){
    int celsius, fahrenheit;
    printf("enter the temperature in celsius:");
    scanf("%d",&celsius);
    fahrenheit=((celsius * 9 / 5) + 32) ;
    printf("the temperature in fahrenheit is:%d",fahrenheit);
    return 0;
}