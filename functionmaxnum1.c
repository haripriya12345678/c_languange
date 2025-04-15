#include<stdio.h>
int max(int a,int b);
int main()
{
    int x,y;
    printf("enter the numbers x, y:");
    scanf("%d \n",&x);
    scanf("%d \n",&y);
    max(x,y);
    return 0;
}
int max(int a,int b)
{
    int max;
    if(a>b)
    {
        max = a;
      // printf(" maximum number is %d:", a);
    }
    else
    {
        max = b;
        //printf(" maximum number is %d:", b);
    }
   printf(" maximum number is %d:", max);
    return 0;
}