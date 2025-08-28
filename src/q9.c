// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"
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