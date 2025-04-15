/*#include<stdio.h>
//#define n 5
int main()
{
     //const int n=5;
    static int arr[n]={4,5,6,7,8};
    for(int i=0;i<n;i++)
    {
    printf("%d",arr[i]);
    }
}*/
/*#include<stdio.h>
//#include<stdilb.h>
int main()
{
    static char *arr[]={"hari","priya"};
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%s",arr[i]);
    }
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    static char *arr[5][20];
    int i;
    for( i=0;i<5;i++)
    {
        printf("Enter the character %d:",i+1);
        scanf("%s",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
    printf("%s",arr[i]);
    }
    return 0;
}*/
//with fixed size of array
/*#include<stdio.h>
int main()
{
    static char *arr[5];//using static array in local then the intillization of static is constant
    int i;
    for( i=0;i<5;i++)
    {
        printf("Enter the character %d:",i+1);//print for character number
        scanf(" %c",&arr[i]);//changed to %c to add space before the specifier for newline
    }
    for(i=0;i<5;i++)
    {
    printf("%c\t",arr[i]);//print each character in array
    }
    return 0;
}*/





//without fixed size of array
/*#include<stdio.h>
int main()
{
    int n=5;
    static char arr[n];//using static array in local then the intillization of static is constant
    int i;
    for( i=0;i<n;i++)
    {
        printf("Enter the character %d:",i+1);//print for character number
        scanf(" %c",&arr[i]);//changed to %c to add space before the specifier for newline
    }
    for(i=0;i<n;i++)
    {
    printf("%c\t",arr[i]);//print each character in array
    }
    return 0;
}*/


// to overcome the problem we can use the macros like define and enum or dynamic memory allocation
/*#include<stdio.h>
#define n 5
int main()
{
    
    static char arr[n];//using static array in local then the intillization of static is constant
    int i;
    for( i=0;i<n;i++)
    {
        printf("Enter the character %d:",i+1);//print for character number
        scanf(" %c",&arr[i]);//changed to %c to add space before the specifier for newline
    }
    for(i=0;i<n;i++)
    {
    printf("%c\t",arr[i]);//print each character in array
    }
    return 0;
}*/


//before the intillization of the static
#include<stdio.h>
int main()
{
    int n=5;
    static char arr[];//using static array in local then the intillization of static is constant
    int i;
    for( i=0;i<5;i++)
    {
        printf("Enter the character %d:",i+1);//print for character number
        scanf(" %c",&arr[i]);//changed to %c to add space before the specifier for newline
    }
    for(i=0;i<5;i++)
    {
    printf("%c\t",arr[i]);//print each character in array
    }
    return 0;
}
