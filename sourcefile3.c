#include<stdio.h>
#include"headerfile3.h"
double divisibleby5(int n);
double divisibleby9(int n);
int main()
{
    int x;
    printf("Enter the value:");
    scanf("%ld",&x);
    divisibleby5(x);
    divisibleby9(x);
    return 0;

}