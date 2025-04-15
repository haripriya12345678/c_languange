#include<stdio.h>
double sum(int arr[],int size);
int main()
{
    int arr[50],n,a;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
printf("Enter the values:");
scanf("%d",&arr[i]);
    }
  printf("%d",sum(arr,n));
  return 0;
}
double sum(int arr[],int size)
{
    int sum=0;
    for (int i=0;i<size;i++)
    {
        sum +=arr[i];
        //printf("%d\n",sum);
    }
    printf("%d\n",sum);
     return 0;

}