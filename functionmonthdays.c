#include<stdio.h>
int monthdays(int n);
int main()
{
    int month;
    printf("Enter the number of month:");
    scanf("%d",&month);
    monthdays(month);
    return 0;
} 
int monthdays(int n)
{

    switch(n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
        printf("it is 31 days");
        break;
        }
        case 2:
        case 4:
        case 6:
        case 9:
        case 11:
        {
            printf("it is 30 days");
        }
        default:
        {
            printf("it is not vaild");
        }

    }
    return 0;
}