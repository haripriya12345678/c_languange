#include<stdio.h>
int main()
{
    float physics ,chemistry,biology,maths,computer,n ;
    printf("Enter the marks:");
    scanf("%f %f %f %f %f ",&physics ,&chemistry,&biology,&maths,&computer);
    float per;
    n= physics +chemistry+biology+maths+computer;
    per=(n/500 )*100;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
     else if(per>=70)
    {
        printf("Grade C");
    }
   else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}