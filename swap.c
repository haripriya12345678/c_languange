#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the values:");
    scanf("%d ",&a);
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}