// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
#include<stdio.h>
#include<math.h>
int main(){
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    int sum = n1 + n2;
    int result = (int)round(sqrt(sum));
    printf("The square root of the sum of %d and %d, rounded to the nearest integer, is: %d\n", n1, n2, result);
    return 0;
}