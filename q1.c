/*#include<stdio.h>
int main()
{
    int a[4]={0,1,3,7};
    int *ptr;
    ptr=a;
    printf("%d \n %d\n %x\n %x\n",a[0],*ptr,&a[0],ptr);
    //ptr+1;
    printf("%x\n",&ptr);
    printf("%d",*ptr);
}*/
#include<stdio.h>
int main()
{
    int arr[5],*p;
    int (*ptr)[5];
    p-arr;
    ptr= &arr;
    printf("p=%p,ptr=%p\n",p,ptr);
    p++;
    ptr-1;
    printf("p-%p,ptr-%p\n",p,ptr);
}
