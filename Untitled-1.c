#include<stdio.h>
int main()
{
    char names[50];
    char *ptr=names;
    int i;
    printf("Enter  names of the cities:");
    scanf("%s",names);
    for( i=0;names[i]!=0 ;i++)
    {
        //address
    printf("%c",names[i]);
    }
     for(int i=0;names[i]!=0;i++)
     {
         printf("%p",ptr[i]);
     }
    return 0;
}