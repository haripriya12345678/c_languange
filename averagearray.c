#include<stdio.h>
double averagearray(int arr[],int n );
int main()
{
    
   
    int size;
    printf("Enter the value:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf(" Enter the elements %d :",i+1);
        scanf("%d",&arr[i]);
    }
printf("average value :%.2f\n  ",averagearray(arr,size));
return 0;
}
double averagearray(int arr[],int n )
{
    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum +=arr[i];
        //printf("%d\n",sum);
    }
    printf("%d\n", sum);
    return (double)sum/n;
}