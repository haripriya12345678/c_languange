int count1(int n)
{
    if(n==0)
    
        return 0;
        return 1+count1(n/10);
}
int count2(long int n,int d)
{
    if(n==0)
       return 0;
    else if(n%10==d)
         return 1+count2(n/10,d);
    else
       return count2(n/10,d);
}