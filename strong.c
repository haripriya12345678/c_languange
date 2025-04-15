#include<stdio.h>
int main()
{
    int num,sum=0,fact,strong;
    printf("Enter the value:");
    scanf("%d",&num);
    int original=num;
    while(num>0)
    {
        strong=num%10;
        fact=1;
        while(strong>0)
        {
            fact *=strong;
            strong--;
        }
        sum+=fact;
        num/=10;
    }
        if(sum==original)
    {
        printf("it is a strong number");
    }
    else{
        printf("it is a  not strong number");
    }
    return 0;
}
