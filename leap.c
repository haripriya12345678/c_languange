#include<stdio.h>
int main()
{
    signed int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%400==0||year%4==0)
    {
        printf("Given year is leap year");
    }
    else if(year%100==0)
    {
        printf("Given year is not leap year");
    }
    return 0;
}