#include<stdio.h>
int main() {
    int year;
    int leap_year=0;
    printf("enter year");
    scanf("%d", &year);

    if(year%4==0) {
        leap_year=leap_year + 1;
    }
    if(year%100==0) {
        leap_year=leap_year-1;
    }
    if(year%400==0) {
        leap_year=leap_year+1;
    }

    if(leap_year==1){
    printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    
return 0; 
}
