#include<stdio.h>
void func(int n);
int main()
{
        int a;
        printf("Enter the value:");
        scanf("%d",&a);
        func(a);
        return 0;
}
void func(int n)
{
    if(n%2==0)
    {
        printf("it is a even");
    }
    else
    {
        printf("it is a odd");
    }
}