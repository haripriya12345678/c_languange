#include<stdio.h>
int main()
{
    typedef char data;
    data ch;
    typedef int value;
    value a;
    printf("Enter the case  value a");
    scanf("%d",&a);
    switch(a=ch)
    {
        case 1:
        {
            printf("Childhood data\n");
            printf("name:amuluru haripriya\n");
            printf("andhrapradesh\n");
        }
        case 2:
        {
            printf("Education details\n");
            printf("B.tech\n");
            printf("stream:ECE\n");
            printf("year:2019-2023\n");
            printf("course:embedded systems\n");
        }
        case 3:
        {
            printf("Dream\n");
            printf("To get a job related to my study\n");
        }
        case 4:
        {
             printf("Goal\n");
             printf("To create more joy in my life\n");
        }
        default :
        {
            printf("Enter data is wrong");
        }
            
    }
    return 0;
}