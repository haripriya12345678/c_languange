#include<stdio.h>
double revarray(int arr[],int n);
void array(int arr[],int size);
int main()
{
    /*int arr[50],n;
    printf("Enter the value:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
     printf("Enter the values:");
     scanf("%d",&arr[i]);
    }*/
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    revarray(arr,size);
    array(arr,size);
    return 0;
}
double revarray(int arr[],int size)
{
       int temp;
       int start=0;
       int end =size-1;
       while(start <end)
       {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end]=temp;
        start++;
        end--;
       }
}  
void array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}    