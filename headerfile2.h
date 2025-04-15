double digit1(int n)
{
    int remainder=0;
    if(n!=0)
    {
      remainder +=n%10;
    n/=10;
    }
    printf("%d",&remainder);
    //return 0;
}
double digit2(int n)
{
    int  remainder;
    if(n==0)
    return 0;
    remainder=n%10;
    remainder-=remainder;
    n/=10;
    return remainder;
}