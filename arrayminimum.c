#include<stdio.h>
int minimum(int x[],int size)
{
    int i,min=9999;
    for(i=0;i<size;i++)
    if(min>x[i])
    min =x[i];
return min;
}
int main()
{
    int a[100],i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
printf("Enter the values:");
scanf("%d",&a[i]);
    }
    //scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    //printf("\n minimum is %d",minimum(a,n));
    }
    printf("\n minimum is %d",minimum(a,n));
    return 0;
}