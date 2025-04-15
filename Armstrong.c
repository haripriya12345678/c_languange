#include<stdio.h>
int main()
{
    int n,original,remainder,result;
    printf("Enter the number:");
    scanf("%d",&n);
    original=n;
    while(original!=0)
    {
        remainder = original%10;
        result += remainder*remainder*remainder;
        original/=10;

    }
    if(result==n)
    {
        printf("Given value is an armstrong");
    }

    else
    {
        printf("Given value is not an armstrong");
    }
    return 0;
}