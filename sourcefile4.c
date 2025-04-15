#include<stdio.h>
#include"headerfile4.h"
int larger(int a,int b);
int smaller(int a,int b);
int main()
{
    int x,y;
    printf("Enter the value:");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("larger number=%d",larger(x,y));
    printf("smaller number%d",smaller(x,y));
    
    return 0;

}