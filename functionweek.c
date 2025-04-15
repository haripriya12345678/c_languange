#include<stdio.h>
int week(int week);
int main()
{
    int w;
    printf("Enter the week number:");
    scanf("%d",&w);
    week(w);
    return 0;
}
int week(int week)
{
    switch(week)
    {
        case 1:
        {
            printf("it is monday");
            break;
        }
        case 2:
        {
            printf("it is tuesday");
            break;
        }
        case 3:
        {
            printf("it is wednesday");
            break;
        }
        case 4:
        {
            printf("it is thursday ");
            break;
        }case 5:
        {
            printf("it is friday");
            break;
        }
        case 6:
        {
            printf("it is saturady");
            break;
        }
        case 7:
        {
            printf("it is sunday");
            break;
        }
        default :
        {
            printf("it is not week day");
        }
    }
    return 0;
}