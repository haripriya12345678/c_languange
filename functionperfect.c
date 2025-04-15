#include<stdio.h>
int perfect(int a);
int main()
{
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    perfect(n);
    return 0;
}
int perfect(int a)
{   
    int remainder,sum=0;
    for(int i=1;i<=(a-1);i++)
    {
        remainder=a%i;
        if(remainder==0)
        {
             sum=sum+i;
        }
    }
    if(sum==a)
    {
        printf("%d it is a perfect number",a);
    }
    else
    {
        printf(" %d it is not a perfect number",a);
    }
    
    return 0;
}