#include <stdio.h>
int main() {
    int var ;
    printf("Enter an integer: ");
    scanf("%d", &var);
    var = (var + 1) * 3 - 10; // Increment by 1, multiply by 3, and subtract 10
    printf("Result: %d\n", var);
    return 0;
}