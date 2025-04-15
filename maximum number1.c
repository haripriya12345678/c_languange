#include<stdio.h>
int main()
{
    int a,b,max;
    printf("enter the numbers a, b:");
    scanf("%d %d\n",&a,&b);
    if(a>b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    printf("%d maximum number is :", max);
    return 0;
}