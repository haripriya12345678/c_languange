#include<stdio.h>
int main()
{
    int n,remainder,sum=0;
    printf("Enter the value:");
    scanf("%d",&n);
    for(int i=1;i<=(n-1);i++)
    {
        remainder=n%i;
        if(remainder==0)
        {
             sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d it is a perfect number",n);
    }
    else
    {
        printf(" %d it is not a perfect number",n);
    }
    
    return 0;
}