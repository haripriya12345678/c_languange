#include<stdio.h>
#include"headerfile2.h"
double digit1(int n);
double digit2(int  n);
int main()
{
    int  a,b,x,y;
    printf("Enter the value:");
    scanf("%ld ",&a);
    scanf("%ld",&b);
    printf("%d\n",digit1(a));
    //printf("%ld\n",x);
    printf("%d\n",digit2(b));
    //printf("%ld\n",y);
    return 0;

}