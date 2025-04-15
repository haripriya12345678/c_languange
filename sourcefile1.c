#include<stdio.h>
#include"headerfile1.h"
int  sumseries(int num1);
int mulseries(int num2);
int divseries(int num3);
int main()
{
    int x=10,y=5,z=10,k;
    k=sumseries(x);
   printf("%d\t", k);
   k=mulseries(y);
   printf("%d\t",k);
   k=divseries(z);
    printf("%d\t",k);
    return 0;
}