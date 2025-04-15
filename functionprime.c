#include<stdio.h>
int prime(int n);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    prime(a);
    return 0;

}
int prime(int n)
{
    int prime=0;
    if(n==0||n==1)
    prime=1;
    for(int i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            prime=1;
            break;
        }
    }
        if(prime==0)
        {
            printf("it is a prime number");
        }
        else
        {
            printf("it is not a prime number");
        }
    return 0;
}