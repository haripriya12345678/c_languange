#include<stdio.h>
int main()
{
    int check;
    printf("Enter the value:");
    scanf("%d",&check);
    if(check%2==0)
    {
        printf("Given value is even");
    }
    else
    {
        printf("Given value is odd");

    }
    return 0;
    
}