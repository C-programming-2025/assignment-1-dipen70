#include<stdio.h>
#include<math.h>    
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int sqrt_n = (int)sqrt(n);
    int result = (sqrt_n * sqrt_n == n);
    printf("%d", result); // prints 1 if num is a perfect square, otherwise prints 0
    return 0;
}