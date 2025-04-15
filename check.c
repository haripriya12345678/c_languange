#include<stdio.h>
int main()
{
    typedef  int num;
    num check;
    printf("enter the number:");
    scanf("%d",&check);
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