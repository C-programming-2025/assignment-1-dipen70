
#include<stdio.h>
int main(){ 
    char c;
    int result;
    printf("Enter a character: ");
    scanf("%c", &c);
    result=(c >= 'A' && c <= 'Z');
    printf("%d" , result);
    return 0;
}