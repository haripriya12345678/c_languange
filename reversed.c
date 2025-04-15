#include<stdio.h>
int main()
{
    int n,remainder,result=0;
    printf("Enter the value:");
    scanf("%d",&n);
    while(n!=0)
    {
    remainder=n%10;
    result=result*10+remainder;
    n/=10;
    }
    if(result!=0)
    {
    printf("%d ",result);
    }
    return 0;
}