#include<stdio.h>
int triangle(int a,int b,int c);
int main()
{
    int x,y,z;
    printf("Enter the angles:");
    scanf("%d %d %d",&x,&y,&z);
    triangle(x,y,z);
    return 0;
}

int triangle(int a,int b,int c)
{
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