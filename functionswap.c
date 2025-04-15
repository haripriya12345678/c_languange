#include<stdio.h>
int swap(int a,int b);
int main()
{
    int x,y;
    printf("Enter the values:");
       scanf("%d",&x);
       scanf("%d",&y);
       swap(x,y);
       return 0;
}
int swap(int a,int b)
{
      a=a+b;
      b=a-b;
      a=a-b;
      printf("%d\n %d",a,b);
      return 0;
}