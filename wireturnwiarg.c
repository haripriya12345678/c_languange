#include<stdio.h>
void func(void);
int main(void)
{    

    func();
    return 0;
}
void func(void)
{   
    long int fact=1;
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    
    for(int i=1;i<=a;++i)
        fact *=i;
    printf("%d\n",fact);

}