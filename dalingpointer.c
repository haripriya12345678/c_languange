#include<stdio.h>
#include<stdlib.h>//library  function fory memory managment
int *fact(int n);//function declaration
int main()
{
    int num;
    printf("Enter the value:");
    scanf("%d",&num);
    int *ptr=fact(num);//address the memory for function calling using ptr(// ptr now points to memory that has been freed)
    //free(ptr);//free the dynamically allocated memory
    printf("%d\n",*ptr);// Dangling pointer, accessing memory that has been freed
    free(ptr);
    return 0;
}
int *fact(int n)
{
    int* result = (int*)malloc(sizeof(int));//dynamic allocated memory
    if (result == NULL) {
        printf("Memory allocation is failed\n");//if doesnot allocated the memory 
        exit(1);
    }
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
         factorial*=i;
         *result=factorial;
    }
    return result;
}