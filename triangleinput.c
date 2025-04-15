#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the angles:");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)<=c || (b+c)<=a || (c+a)<=b)
    {
        printf("Triangle is vaild");

    }
    else
    {
        printf("Triangle is not vaild");
    }
    return 0;
}