#include<stdio.h>
#define max 100 // using macro for define throughout the program
int main()
{
    int arr[max];//declaration of the array
    int i,size,num,position;
    printf("Enter the size:");
    scanf("%d",&size);//giving the user index/size of the  array
    printf("Enter the values:");//giving the array values using for loop upto end of the size
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the num:");
    scanf("%d",&num);//giving the  number by the user
    printf("Enter the position:");
    scanf("%d",&position);//giving the position of the given number where user want
    if(position>size+1 || position<=0)//invalid user values
    {
          printf("it is not valid");
    }
else
  {
    for(i=size;i>=position;i--)// new way for new array elements by shifting
    {
        arr[i]=arr[i-1];
    }
    arr[position-1]=num;//insertion of the given element 
    size++;
    printf(" after insertion:");//after insertion
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
return 0;

}