#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the angles:");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        printf("Triangle is vaild");

    }
    else
    {
        printf("Triangle is not vaild");
    }
    return 0;
}