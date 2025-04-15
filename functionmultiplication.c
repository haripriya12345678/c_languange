#include<stdio.h>
int mul(int n);
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    mul(a);
    return 0;
}

int mul(int n)   
{
    int i;
    for(i=1;i<=10;i++)
    {
    printf("%d\n ",n*i);
    }
    return 0;
}