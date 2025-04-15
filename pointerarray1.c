#include<stdio.h>
char createpointerarray(char *ptr[20]);
int main()
{ 
    char *ptrarray[20];
    createpointerarray(ptrarray);
}
char createpointerarray(char *ptr[20])
{
    char names[50];
    *ptr=&names;
    int i;
    printf("Enter  names of the cities:");
    scanf("%s",names);
    for( i=0;names[i]!=0 ;i++)
    {
    printf("%c",names[i]);
    }
    printf("%p\n",(void*)ptr);
    printf("%c\n",names[0]);
    printf("%p\n",ptr);
    printf("%c\n",*ptr[0]);
    printf("%p\n",&ptr);
    printf("%c\n",*names);
    printf("%p\n",&names);
    printf("%p\n",(void *)&ptr);
    printf("%s\n",names[0]);
    return 0;
}