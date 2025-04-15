/*#include<stdio.h>
int main()
{
  // int null=0;
 // int n = 4;
 int *ptr = null;
    //int *ptr = (void *)0;
    //int *ptr = NULL;
    // int *ptr = 0;
    printf("%d",*ptr);
    return 0;
} */



#include<stdio.h>
#include<string.h>
void foo(char *string);
int main()
{
  //  int n=4567;
   // int *ptr1=NULL;
    //int *ptr2=&n;
    //foo(NULL);
    char str[]="course";
    foo(str);
    //foo(ptr2);
    return 0;
}
void foo(char *string)
{

    if(string == NULL)
    {
        printf("NULL pointer passed ");
        return ;
    }
    else if(strcmp(string,"course")==0)
    {
        printf("%s valid string pointer :",string);
        printf("non-NULL pointer is passed ");
    }
    else
    {
        printf("it is not valid");
    }
}


/*#include<stdio.h>
int main()
{
    int n=55;
    int *ptr1=&n;
    int *ptr2 = NULL;
    if(ptr==NULL)
    {
        printf("pointer does not point to anything");
    }
    else{
        printf("value pointed by pointer :%d",*ptr);
    }
    return 0;
}*/