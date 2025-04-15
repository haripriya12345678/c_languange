#include<stdio.h>
#include"headerfile5.h"
int count1(int n);
int count2(long int n,int d);
int main()
{
     int x,y;
     long int z;
    printf("Enter the values:");
    scanf("%d",&x);
    scanf("%d",&z);
    scanf("%d",&y);
    printf("%d\n",count1(x));
    printf("%d\n",count2(z,y));
    return 0;

}