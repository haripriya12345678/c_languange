#include<stdio.h>
int func(void);
int main()
{
       printf("%d",func());
       return 0;
}
int func(void)
{
    int num;
    printf("Enter the value:");
    scanf("%d",&num);
    if(num==0)
    {
        return 1;
    }
    for(int i=1;i<num;i++)
        if(num%i==0)
        {
          printf("%d\n",i); 
        }
   
}