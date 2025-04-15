#include<stdio.h>
long array(int n);//function declaration
int main()
{
    int num[]={1,2,3,4,5};//array intillization
    int n=sizeof(num)/sizeof(num[0]);//here declaraing the stopping purpose for upto null point
    for(int i=0;i<n;i++)
    {
        printf("%ld\n",array(num[i]));//printing the output of factorial values
    }
    return 0;
}
long array(int n)//function definition
{
    long fact =1;
    for(int i=1;i<=n;i++)//for repeating the loop for factors
    {
    fact *=i;
   // printf("%d",fact);
    }
    return fact;
}