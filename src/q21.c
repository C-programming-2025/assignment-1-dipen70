#include<stdio.h>
int main(){
    int x, y, z, temp;
    printf("Enter values for x, y, and z: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Before swap: x=%d, y=%d, z=%d\n", x, y, z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("After swap: x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
}