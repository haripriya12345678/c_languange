#include<stdio.h>
int fuc(int a,int b)
{
    printf(" addition : %d",(a+b));
    printf(" subtraction : %d",(a-b));
    printf(" multiplication : %d",(a*b));
    printf(" division : %d",(a/b));
    printf(" modulation  : %d",(a%b));
    return 0;
}
int main()
{
       int x,y;
       printf("Enter the value of x,y:");
       scanf("%d ",&x);
       scanf("%d",&y);
       fuc(x,y);
       return 0;
    
}