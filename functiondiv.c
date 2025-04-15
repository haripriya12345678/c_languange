#include<stdio.h>
int div(int num);
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    div(n);
    return 0;
}
int div(int num)
{
    if(num%5==0 && num%11==0)
    {
        printf("Given number is divisible by 5 and 11");
    }
    else
    {
        printf("given number is not divisible by 5 and 11");
    }
    return 0;
}