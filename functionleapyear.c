#include<stdio.h>
int year(int  year);
int main()
{
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    year(y);
    return 0;
}
int year(int year)
{
    if(year%400==0||year%4==0)
    {
        printf("Given year is leap year");
    }
    else if(year%100==0)
    {
        printf("Given year is not leap year");
    }
    else
    {
        printf("Given is not leap year");
    }
    return 0;
}