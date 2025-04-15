#include<stdio.h>
int palindrome(int n);
int main()
{
    int a;
    printf("Enter the palindrome value:");
    scanf("%d",&a);
    palindrome(a);
    
    return 0;
}
int palindrome(int n)
{
    int original, remainder,reversed =0;
     original=n;
    while(n!=0)
    {
    remainder = n%10;
    reversed=reversed *10+remainder;
    n/=10;
    }
    if(original==reversed)
    {
    printf("it is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
return 0;
}