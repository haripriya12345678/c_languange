#include<stdio.h>
int check(int check);
int main()
{
    typedef  int num;
    num c;
    printf("enter the number:");
    scanf("%d",&c);
    check(c);
    return 0;
}
int check(int check)
{
    if(check<0)
    {
        printf("Given number is negative");
    }
    else if(check==0)
    {
        printf("Given number is zero");
    }
    else
    {
        printf("Given number is positive");
    }
    return 0;
}