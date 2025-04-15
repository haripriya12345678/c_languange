#include<stdio.h>
int armstrong(int n);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    armstrong(a);

}
int armstrong(int n)
{
    int original,remainder,result;
    original=n;
    while(original!=0)
    {
        remainder = original%10;
        result += remainder*remainder*remainder;
        original/=10;

    }
    if(result==original)
    {
        printf("Given value is an armstrong");
    }
    else
    {
        printf("Given value is not an armstrong");
    }
    return 0;
}