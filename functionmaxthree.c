#include<stdio.h>
int max(int a,int b,int c);
int main()
{
    int x,y,z;
    printf("enter the numbers x  y z:");
    scanf("%d ",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    max(x,y,z);
    return 0;
}
int max(int a,int b,int c)
{
    int max;
    if(a>b && a>c)
    {
        max = a;
    }
    else if(b>a && b>c)
    {
        max = b;
    }
    else
    {
        max =c;
    }
    printf(" maximum number is :%d\n ", max);
    return 0;
}