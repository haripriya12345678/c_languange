#include<stdio.h>
char createpointerarray(char (*ptr)[20]);
int main()
{
    char (*ptrarray)[20];
    createpointerarray(ptrarray);
    return 0;
}
char createpointerarray(char (*ptr)[20])
{
    
    char names[50];
    ptr=&names;
    int i;
    printf("Enter  names of the cities:");
    scanf("%s",names);
    for( i=0;names[i]!=0 ;i++)
    {
    printf("%c",names[i]);
    }
    printf("%p\n",(void*)ptr);
    printf("%c\n",names);
    printf("%p\n",ptr);
    printf("%c\n",*ptr);
    printf("%p\n",&ptr);
    printf("%c\n",*names);
    printf("%p\n",&names);
    return 0;a
}