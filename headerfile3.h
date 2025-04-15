double divisibleby5(int n)
{ 
    int num1,num2;
    num1=n/10;
    num2=n%10;
    if(num1==0 || num2==5)
    {
        printf("\nit is divisible by 5");
    }
    else
    {
        printf("\nit is not divisible by 5");
    }
    return 0;
}
double divisibleby9(int n)
{
   int num1,num2,sum;
   num1 = n/9;
   num2=n%10;
   sum+=num2;
   n/=10;
   if(sum==n || num1==0)
   {
    printf("\nit is divisible by 9");
}
else
{
    printf("\nit is not divisible by 9");
}
return 0;
}
   

