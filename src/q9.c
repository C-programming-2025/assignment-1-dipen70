#include<stdio.h>
int main(){
    int days, weeks, extra_days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    weeks = days / 7;
    extra_days = days % 7;
    printf("%d days is %d weeks and %d days\n", days, weeks, extra_days);
    return 0;
}