#include<stdio.h>
int fact(int n);
int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    printf("%d",fact(a));
    return 0;
   
}
int fact(int n)
{  
    long int fact=1;
    if(n==0)
    
        return 1;
    for(int i=n;i>1;i--)
        fact *=i;
        return fact;
    
}